cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(submodule_lib_2 LANGUAGES CXX)

add_subdirectory(submodules/my_submodule_lib)

add_library(submodule_lib_2 SHARED
    src/bar.cpp
)

set_target_properties(submodule_lib_2 PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

target_include_directories(submodule_lib_2 PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(submodule_lib_2 PUBLIC submodule_lib)
