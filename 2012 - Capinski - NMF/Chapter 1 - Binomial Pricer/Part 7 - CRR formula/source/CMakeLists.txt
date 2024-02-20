cmake_minimum_required(VERSION 3.5)

project(OptionsApp
    VERSION 1.0
    DESCRIPTION "CRR pricing"
    LANGUAGES CXX)

# Target
add_executable(OptionsApp OptionsTest.cpp
        src/BinModel01.cpp src/Options01.cpp src/MathFunctions.cpp)

target_compile_features(OptionsApp PRIVATE cxx_std_20)

target_include_directories(OptionsApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)