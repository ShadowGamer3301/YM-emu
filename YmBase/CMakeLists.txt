#Search for all C++ files in src directory
file(GLOB code "src/*.cxx")

#Use found files to create a shared library
add_library(YmBase SHARED ${code})

#Point project to search for header files in YmBase/Include
target_include_directories(YmBase PRIVATE "${CMAKE_SOURCE_DIR}/YmBase/Include")