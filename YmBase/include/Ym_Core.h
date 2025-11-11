#pragma once

//Include standard C/C++ library
#include <cstdint>
#include <iostream>

#if defined _WIN32 || defined WIN32
    #define PLAT_WIN32 //Use singular macro to define Windows platform

    #ifdef _WINDLL
        //If generated project is a DLL file export functions and variables
        #define YMAPI __declspec(dllexport)
    #else
        //Otherwise import them
        #define YMAPI __declspec(dllimport)
    #endif

#elif defined __linux__ || defined __linux



#endif