cmake_minimum_required(VERSION 3.5)

project(FunctionPointerApp
    VERSION 1.0
    DESCRIPTION "Description"
    LANGUAGES CXX)

# Target
add_executable(FunctionPointerApp Main07.cpp
        src/BinModel01.cpp src/Options03.cpp)

target_compile_features(FunctionPointerApp PRIVATE cxx_std_20)

target_include_directories(FunctionPointerApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)