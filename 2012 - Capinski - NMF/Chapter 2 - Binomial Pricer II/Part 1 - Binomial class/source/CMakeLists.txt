cmake_minimum_required(VERSION 3.5)

project(BinModelClass
    VERSION 1.0
    DESCRIPTION "Description"
    LANGUAGES CXX)

# Target
add_executable(BinModelClass Main08.cpp
        src/BinModel02.cpp src/Options04.cpp)

target_compile_features(BinModelClass PRIVATE cxx_std_20)

target_include_directories(BinModelClass PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)