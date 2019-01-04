/*
 * Copyright (c) 2012-2018 Daniele Bartolini and individual contributors.
 * License: https://github.com/dbartolini/crown/blob/master/LICENSE
 */

#include "core/containers/sort_map.h"
#include "core/filesystem/file.h"
#include "resource/material_resource.h"
#include "resource/resource_manager.h"
#include "world/material_manager.h"
#include <bgfx/bgfx.h>
#include <string.h> // memcpy

namespace crown
{
MaterialManager::MaterialManager(Allocator& a, ResourceManager& rm)
	: _allocator(&a)
	, _resource_manager(&rm)
	, _materials(a)
{
}

MaterialManager::~MaterialManager()
{
	auto cur = sort_map::begin(_materials);
	auto end = sort_map::end(_materials);
	for (; cur != end; ++cur)
	{
		_allocator->deallocate(cur->second);
	}
}

void* MaterialManager::load(File& file, Allocator& a)
{
	const u32 file_size = file.size();
	void* res = a.allocate(file_size);
	file.read(res, file_size);
	CE_ASSERT(*(u32*)res == RESOURCE_VERSION_MATERIAL, "Wrong version");
	return res;
}

void MaterialManager::online(StringId64 id, ResourceManager& rm)
{
	using namespace material_resource;

	MaterialResource* mr = (MaterialResource*) rm.get(RESOURCE_TYPE_MATERIAL, id);

	char* base = (char*)mr + mr->dynamic_data_offset;

	for (u32 i = 0; i < mr->num_textures; ++i)
	{
		TextureData* td    = get_texture_data(mr, i);
		TextureHandle* th  = get_texture_handle(mr, i, base);
		th->sampler_handle = bgfx::createUniform(get_texture_name(mr, td), bgfx::UniformType::Int1).idx;
	}

	for (u32 i = 0; i < mr->num_uniforms; ++i)
	{
		UniformData* ud    = get_uniform_data(mr, i);
		UniformHandle* uh  = get_uniform_handle(mr, i, base);
		uh->uniform_handle = bgfx::createUniform(get_uniform_name(mr, ud), bgfx::UniformType::Vec4).idx;
	}
}

void MaterialManager::offline(StringId64 id, ResourceManager& rm)
{
	using namespace material_resource;

	MaterialResource* mr = (MaterialResource*) rm.get(RESOURCE_TYPE_MATERIAL, id);

	char* base = (char*) mr + mr->dynamic_data_offset;

	for (u32 i = 0; i < mr->num_textures; ++i)
	{
		TextureHandle* th = get_texture_handle(mr, i, base);
		bgfx::UniformHandle sh;
		sh.idx = th->sampler_handle;
		bgfx::destroy(sh);
	}

	for (u32 i = 0; i < mr->num_uniforms; ++i)
	{
		UniformHandle* uh = get_uniform_handle(mr, i, base);
		bgfx::UniformHandle bgfx_uh;
		bgfx_uh.idx = uh->uniform_handle;
		bgfx::destroy(bgfx_uh);
	}
}

void MaterialManager::unload(Allocator& a, void* res)
{
	a.deallocate(res);
}

void MaterialManager::create_material(StringId64 id)
{
	if (sort_map::has(_materials, id))
		return;

	const MaterialResource* mr = (MaterialResource*)_resource_manager->get(RESOURCE_TYPE_MATERIAL, id);

	const u32 size = sizeof(Material) + mr->dynamic_data_size;
	Material* mat  = (Material*)_allocator->allocate(size);
	mat->_resource = mr;
	mat->_data     = (char*)&mat[1];

	const char* data = (char*)mr + mr->dynamic_data_offset;
	memcpy(mat->_data, data, mr->dynamic_data_size);

	sort_map::set(_materials, id, mat);
	sort_map::sort(_materials);
}

void MaterialManager::destroy_material(StringId64 id)
{
	Material* mat = sort_map::get(_materials, id, (Material*)NULL);
	_allocator->deallocate(mat);

	sort_map::remove(_materials, id);
	sort_map::sort(_materials);
}

Material* MaterialManager::get(StringId64 id)
{
	CE_ASSERT(sort_map::has(_materials, id), "Material not found");
	return sort_map::get(_materials, id, (Material*)NULL);
}

} // namespace crown
