cmake_minimum_required(VERSION 3.5)

project(BinModelPointerApp
    VERSION 1.0
    DESCRIPTION "Description"
    LANGUAGES CXX)

# Target
add_executable(BinModelPointerApp TestBinModel.cpp
        src/BinModel01.cpp)

target_compile_features(BinModelPointerApp PRIVATE cxx_std_20)

target_include_directories(BinModelPointerApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)