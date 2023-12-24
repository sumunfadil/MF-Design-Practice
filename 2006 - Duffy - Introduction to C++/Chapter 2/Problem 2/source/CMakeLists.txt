cmake_minimum_required(VERSION 3.5)

project(TestPersonApp
        VERSION 1.0
        DESCRIPTION "Person class"
        LANGUAGES CXX)

set(SOURCE_FILES TestPerson.cpp src/Person.cpp src/DatasimDate.cpp)

add_executable(TestPersonBinary ${SOURCE_FILES})

target_compile_features(TestPersonBinary PRIVATE cxx_std_20)

target_include_directories(TestPersonBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)


