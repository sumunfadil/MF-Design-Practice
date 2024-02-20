cmake_minimum_required(VERSION 3.5)

project(Name_App
    VERSION 1.0
    DESCRIPTION "Description"
    LANGUAGES CXX)

# Target
add_executable(name_Binary test.cpp
        src/include.cpp)

target_compile_features(name_Binary PRIVATE cxx_std_20)

target_include_directories(name_Binary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)