#pragma once

#ifdef  GX_PLATFORM_WINDOWS
	#ifdef GX_BUILD_DLL
		#define GALAXY_API __declspec(dllexport) 
	#else
		#define GALAXY_API __declspec(dllimport) 
	#endif // GX_BUILD_DLL
#else
	#error Galaxy only support Windows!
#endif //  GX_PLATFORM_WINDOWS

#ifdef GX_ENABLE_ASSERTS
	#define GX_ASSERT(x, ...){if(!(x)){GX_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak();}}
	#define GX_CORE_ASSERT(x, ...){if(!(x)){ GX_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak();}}
#else
	#define GX_ASSERT(x, ...)
	#define GX_CORE_ASSERT(x, ...)
#endif // GX_ENABLE_ASSERTS



#define BIT(x) (1 << x)

#define GX_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)