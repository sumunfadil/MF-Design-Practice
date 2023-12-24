How to generate the Binary file in build folder?

1. cd to build folder
2. Run CMake
    a. cmake -GNinja ..\source\ (uses GCC by default)
    b. cmake --build .


3. Delete build folder: rm -r ..\build\ or rm *