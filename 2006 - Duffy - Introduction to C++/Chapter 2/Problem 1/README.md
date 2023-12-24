# Folder structure
- `Project 1`
    - `build`
        - All build files (not on GitHub)
    - `source`
        - `include`
            - All header files `*.hpp`
        - `src`
            - All source files `*.cpp`
        - `TestFiles.cpp`
        - `CMakeLists.txt`
- `Project 2`
...
- `Project n`

# Generate Binary file in `build` folder

## CMake commands
- cd to `build` folder
- Run CMake (MY DEFAULT)
    - `cmake -GNinja ..\source\` (uses GCC by default)
    - `cmake --build .`
- Run CMake (OPTIONS: GENERATORS)
    - Generate build files (`cmake -G"generator_name" ..\source\`)
        - MinGW generator
            - `cmake -G "MinGW Makefiles" ..\source\`
            - `mingw32-make`
        - Ninja generator
            - `cmake -G "Ninja" ..\source\`
            - `ninja`
        - Simpler way (THE DEFAULT IS MinGW)
            - `cmake ..\source\`
    - `cmake --build .`
- Run CMake (OPTIONS: COMPILERS)
    - Generate build files
        - MinGW generator
            - `cmake -G"MinGW Makefiles" -D CMAKE_CXX_COMPILER=g++ ..\source\`
		    - `cmake -G"MinGW Makefiles" -D CMAKE_CXX_COMPILER=clang++ ..\source\`
        - Ninja generator
            - `cmake -GNinja CMAKE_CXX_COMPILER=g++ ..\source\`
		    - `cmake -GNinja CMAKE_CXX_COMPILER=clang++ ..\source\`
    - `cmake --build .`
- Delete build folder (to use other generators or compilers)
    - `rm -r ..\build\` or 
    - `rm *` (SAFER OPTION)

## A note on compilers and generators
- Generators have default compilers:
	- MinGW Makefiles: gcc compiler
	- Ninja: gcc compiler
- Each generator has a set of compilers which we can change:
	- MinGW Makefiles: g++ and clang
	- Ninja: g++, clang and MSVC

# Git workflow

## Getting started
- `git clone "github-repo"`

## Making changes
- cd in root of repository in VSCode terminal
- `git status`
- `git add .`
- `git commit -m "comment"`

## Starting on another machine to local folder
- `git fetch` (ensure nothing new added)
- `git merge`

# Some terminal commands
- `ls`: all files in current directory
- `pwd`: print current working directory
- `rm *`: remove everthing in current folder (CAN GO WRONG IF YOU ARE NOT IN DESIRED FOLDER)
- `rm -r "path\folder"`: recursive remove (SAFER OPTION)