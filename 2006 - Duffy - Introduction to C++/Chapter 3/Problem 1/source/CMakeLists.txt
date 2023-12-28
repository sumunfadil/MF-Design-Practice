cmake_minimum_required(VERSION 3.5)

project(TestEuropeanOptionApp
        VERSION 1.0
        DESCRIPTION "European Option class"
        LANGUAGES CXX)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(TestEuropeanOptionBinary TestEuropeanOption.cpp ${SRC_FILES})

target_compile_features(TestEuropeanOptionBinary PRIVATE cxx_std_20)

target_include_directories(TestEuropeanOptionBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)


