cmake_minimum_required(VERSION 3.5)

project(LibraryApp
    VERSION 1.0
    DESCRIPTION "Using a library"
    LANGUAGES CXX)

set(Librarypath "C:/Users/SUMUN/OneDrive - London School of Economics/Research/Code/CPP_LSE/MF-Design-Practice/2012 - Capinski - NMF/C Library")

# Target
add_executable(LibraryApp Main.cpp
    ${Librarypath}/src/include.cpp)

target_compile_features(LibraryApp PRIVATE cxx_std_20)

#target_include_directories(LibraryApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(LibraryApp PRIVATE ${Librarypath}/include)