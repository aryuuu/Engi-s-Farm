cmake_minimum_required (VERSION 2.6)
project (Engisfarm)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")
include_directories ("${PROJECT_SOURCE_DIR}/lib")
include_directories ("${PROJECT_SOURCE_DIR}/src")

add_subdirectory (lib) 

# add the executable

add_executable(Main main.cpp)
target_link_libraries (Main MathFunctions)