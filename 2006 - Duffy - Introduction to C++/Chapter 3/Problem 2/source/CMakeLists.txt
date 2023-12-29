cmake_minimum_required(VERSION 3.5)

project(TestSimpleBondPricingApp
        VERSION 1.0
        DESCRIPTION "Simple Bond Pricing"
        LANGUAGES CXX)

add_executable(TestSimpleBondPricingBinary TestSimpleBondPricing.cpp
                src/SimpleBondPricing.cpp)

target_compile_features(TestSimpleBondPricingBinary PRIVATE cxx_std_20)

target_include_directories(TestSimpleBondPricingBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)


