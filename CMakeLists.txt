cmake_minimum_required(VERSION 3.28)
project(c_senior C)

set(CMAKE_C_STANDARD 11)

add_executable(c_senior main.c
        chapter1/typrdef.c
        chapter1/void.c
        chapter1/sizeof.c
        chapter1/variable.c
        chapter1/heap_area.c
        chapter1/global_variable.c
        chapter1/const.c
        chapter2/macro.c
        chapter2/function_call.c
        chapter2/stack.c
        "chapter2/wild_pointer.c"
        chapter2/pointer_step_length.c
        chapter2/pointer_indirect_assignment.c
        chapter2/pointer_indirect_assignment2.c
        chapter2/string_copy.c
        chapter2/string_inversion.c
)
