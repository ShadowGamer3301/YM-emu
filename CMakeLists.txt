#Require CMake in version 3.30 or higher
cmake_minimum_required(VERSION 3.30)

#Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

#Set output directories
if(WIN32) #Output directories for Windows
	set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Compiled/Win32/Lib")
	set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Compiled/Win32/Lib")
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Compiled/Win32/Bin")
elseif(UNIX) #Output directories for Linux and Unix systems
	set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Compiled/Unix/Lib")
	set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Compiled/Unix/Bin")
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Compiled/Unix/Bin")
endif()

#Declare project
project(YmBase VERSION 0.1)