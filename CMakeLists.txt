cmake_minimum_required(VERSION 3.29)
project(LearningC C)

set(CMAKE_C_STANDARD 11)

add_executable(LearningC main.c
        commenting.c
        escape_seq.c
        variables.c
        data_types.c
        format_specifiers.c
        constants.c
        arithmetic_operators.c)
