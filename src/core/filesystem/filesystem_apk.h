/*
 * Copyright (c) 2012-2018 Daniele Bartolini and individual contributors.
 * License: https://github.com/dbartolini/crown/blob/master/LICENSE
 */

#pragma once

#include "core/platform.h"

#if CROWN_PLATFORM_ANDROID

#include "core/filesystem/filesystem.h"
#include <sys/types.h> // off_t
#include <android/asset_manager.h>

namespace crown
{
/// Access files on Android's assets folder.
/// The assets folder is read-only and all the paths are relative.
///
/// @ingroup Filesystem
struct FilesystemApk : public Filesystem
{
	Allocator* _allocator;
	AAssetManager* _asset_manager;

	FilesystemApk(Allocator& a, AAssetManager* asset_manager);

	/// @copydoc Filesystem::open()
	File* open(const char* path, FileOpenMode::Enum mode);

	/// @copydoc Filesystem::close()
	void close(File& file);

	/// @copydoc Filesystem::exists()
	bool exists(const char* path);

	/// @copydoc Filesystem::is_directory()
	bool is_directory(const char* path);

	/// @copydoc Filesystem::is_file()
	bool is_file(const char* path);

	/// @copydoc Filesystem::last_modified_time()
	u64 last_modified_time(const char* path);

	/// @copydoc Filesystem::create_directory()
	void create_directory(const char* path);

	/// @copydoc Filesystem::delete_directory()
	void delete_directory(const char* path);

	/// @copydoc Filesystem::delete_file()
	void delete_file(const char* path);

	/// @copydoc Filesystem::list_files()
	void list_files(const char* path, Vector<DynamicString>& files);

	/// @copydoc Filesystem::get_absolute_path()
	void get_absolute_path(const char* path, DynamicString& os_path);
};

} // namespace crown

#endif // CROWN_PLATFORM_ANDROID
