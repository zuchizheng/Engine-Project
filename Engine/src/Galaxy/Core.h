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

#define BIT(x) (1 << x)