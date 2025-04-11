cmake_minimum_required(VERSION 3.11)
project(C_Exercises VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_STANDARD_REQUIRED TRUE)
add_compile_options(-Wall -Wextra -Wpedantic)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB_RECURSE EXERCISES "src/*.c")

foreach(source_file ${EXERCISES})
    get_filename_component(ex_name ${source_file} NAME_WE)
    add_executable(${ex_name} ${source_file})
endforeach(source_file ${EXERCISES})

