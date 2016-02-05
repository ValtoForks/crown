/*
 * Copyright (c) 2012-2016 Daniele Bartolini and individual contributors.
 * License: https://github.com/taylor001/crown/blob/master/LICENSE
 */

#pragma once

#include "container_types.h"
#include "compile_options.h"

namespace crown
{
class UnitCompiler
{
	typedef Buffer (*CompileFunction)(const char* json, CompileOptions& opts);

	struct ComponentTypeData
	{
		ALLOCATOR_AWARE;

		CompileFunction _compiler;

		u32 _num;
		Array<u32> _unit_index;
		Buffer _data;

		ComponentTypeData(Allocator& a)
			: _num(0)
			, _unit_index(a)
			, _data(a)
		{
		}
	};

	typedef SortMap<StringId32, ComponentTypeData> ComponentTypeMap;

	CompileOptions& _opts;
	u32 _num_units;
	ComponentTypeMap _component_data;

	void register_component_compiler(const char* type, CompileFunction fn, f32 spawn_order);
	Buffer compile_component(StringId32 type, const char* json);
	void add_component_data(StringId32 type, const Buffer& data, u32 unit_index);

public:

	UnitCompiler(CompileOptions& opts);

	void compile_unit(const char* path);
	void compile_unit_from_json(const char* json);
	void compile_multiple_units(const char* json);

	Buffer blob();
};

} // namespace crown
