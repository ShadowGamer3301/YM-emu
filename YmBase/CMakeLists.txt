#Search for all C++ files in src directory
file(GLOB code "src/*.cxx")

#Use found files to create a shared library
add_library(YmBase SHARED ${code})

#Point project to search for header files in YmBase/Include
target_include_directories(YmBase PRIVATE "${CMAKE_SOURCE_DIR}/YmBase/Include")

#Set compile definitions for Windows build
if(WIN32)
	target_compile_definitions(YmBase PRIVATE "_WINDLL") #Mark project as dynamic library
endif()