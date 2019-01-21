#pragma once

#ifdef WVOFM_PLATFORM_WINDOWS
	#ifdef WVOFM_BUILD_DLL
		#define WVOFM_API __declspec(dllexport) 

		#else
			#define WVOFM_API __declspec(dllimport)
	#endif
#else
	#error WVOFM stands for windows vista only fuck mac

#endif