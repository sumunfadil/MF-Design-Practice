cmake_minimum_required(VERSION 3.5)

project(VirtualFuncApp
    VERSION 1.0
    DESCRIPTION "Description"
    LANGUAGES CXX)

# Target
add_executable(VirtualFuncApp Main10.cpp
        src/BinModel02.cpp src/Options06.cpp)

target_compile_features(VirtualFuncApp PRIVATE cxx_std_20)

target_include_directories(VirtualFuncApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)