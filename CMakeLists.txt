cmake_minimum_required(VERSION 3.00)
project(Web_Server_C)

add_compile_options(-g)

file(GLOB MAIN
        "*.h"
        "*.c"    
)

add_executable(main ${MAIN})

