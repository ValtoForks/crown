--
-- Copyright (c) 2012-2018 Daniele Bartolini and individual contributors.
-- License: https://github.com/dbartolini/crown/blob/master/LICENSE
--

function openal_project(_kind)
	project "openal"
		kind (_kind)

		configuration {}

		local AL_DIR = (CROWN_DIR .. "3rdparty/openal/")

		defines {
			"_LARGE_FILES",
			"_LARGEFILE_SOURCE",
			"AL_ALEXT_PROTOTYPES",
			"AL_BUILD_LIBRARY",
			"HAVE_C99_BOOL",
			"HAVE_FENV_H",
			"HAVE_FLOAT_H",
			"HAVE_LRINTF",
			"HAVE_MALLOC_H",
			"HAVE_STAT",
			"HAVE_STDBOOL_H",
			"HAVE_STDINT_H",
			"HAVE_STRTOF",
		}

		configuration { "not vs*" }
			defines {
				"HAVE_C99_VLA",
				"HAVE_DIRENT_H",
				"HAVE_GCC_DESTRUCTOR",
				"HAVE_GCC_FORMAT",
				"HAVE_PTHREAD_SETNAME_NP",
				"HAVE_PTHREAD_SETSCHEDPARAM",
				"HAVE_STRINGS_H",
				"restrict=__restrict",
				"SIZEOF_LONG=8",
				"SIZEOF_LONG_LONG=8",
				-- These are needed on non-Windows systems for extra features
				"_GNU_SOURCE=1",
				"_POSIX_C_SOURCE=200809L",
				"_XOPEN_SOURCE=700",
			}
			buildoptions {
				"-std=c99",
				"-fPIC",
				"-Winline",
				"-fvisibility=hidden",
			}

		configuration { "linux-* or android-*" }
			defines {
				"HAVE_DLFCN_H",
				"HAVE_GCC_GET_CPUID",
			}

		configuration { "not android-*" }
			defines {
				"HAVE_SSE",
				"HAVE_SSE2",
			}
			files {
				AL_DIR .. "Alc/mixer_sse2.c",
				AL_DIR .. "Alc/mixer_sse.c",
			}

		configuration { "android-*" }
			files {
				AL_DIR .. "Alc/backends/opensl.c"
			}
			links {
				"OpenSLES",
			}

		configuration { "linux-*" }
			defines {
				"HAVE_CPUID_H",
				"HAVE_POSIX_MEMALIGN",
				"HAVE_PTHREAD_MUTEX_TIMEDLOCK",
				"HAVE_PULSEAUDIO",
			}
			files {
				AL_DIR .. "Alc/backends/pulseaudio.c",
			}

		configuration { "vs* or mingw-*"}
			defines {
				"_WIN32_WINNT=0x0502",
				"_WINDOWS",
				"HAVE___CONTROL87_2",
				"HAVE__ALIGNED_MALLOC",
				"HAVE__CONTROLFP",
				"HAVE_CPUID_INTRINSIC",
				"HAVE_DSOUND",
				"HAVE_GUIDDEF_H",
				"HAVE_INTRIN_H",
				"HAVE_IO_H",
				"HAVE_MMDEVAPI",
				"HAVE_WINDOWS_H",
				"HAVE_WINMM",
			}
			files {
				AL_DIR .. "Alc/backends/mmdevapi.c",
				AL_DIR .. "Alc/backends/dsound.c",
				AL_DIR .. "Alc/backends/winmm.c",
			}
			links {
				"winmm",
				"ole32",
			}

		configuration { "vs*" }
			defines {
				"_CRT_NONSTDC_NO_DEPRECATE",
				"inline=__inline",
				"restrict=",
				"SIZEOF_LONG=4",
				"SIZEOF_LONG_LONG=8",
				"strcasecmp=_stricmp",
				"strncasecmp=_strnicmp",
			}
			buildoptions {
				"/wd4098",
				"/wd4267",
				"/wd4244",
			}

		configuration {}

		includedirs {
			AL_DIR,
			AL_DIR .. "include",
			AL_DIR .. "Alc",
			AL_DIR .. "OpenAL32/Include",
		}

		files {
			AL_DIR .. "common/*.c",
			AL_DIR .. "Alc/ALc.c",
			AL_DIR .. "Alc/ALu.c",
			AL_DIR .. "Alc/bsinc.c",
			AL_DIR .. "Alc/alcConfig.c",
			AL_DIR .. "Alc/alcRing.c",
			AL_DIR .. "Alc/bs2b.c",
			AL_DIR .. "Alc/helpers.c",
			AL_DIR .. "Alc/hrtf.c",
			AL_DIR .. "Alc/panning.c",
			AL_DIR .. "Alc/mixer.c",
			AL_DIR .. "Alc/mixer_c.c",
			AL_DIR .. "Alc/effects/*.c",
			AL_DIR .. "Alc/midi/*.c",
			AL_DIR .. "Alc/backends/base.c",
			AL_DIR .. "Alc/backends/loopback.c",
			AL_DIR .. "Alc/backends/null.c",
			AL_DIR .. "OpenAL32/*.c",
		}

		configuration {}
end
