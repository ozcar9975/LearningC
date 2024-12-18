cmake_minimum_required(VERSION 3.29)
project(LearningC C)

set(CMAKE_C_STANDARD 11)

add_executable(LearningC main.c
        "lesson files/commenting.c"
        "lesson files/escape_seq.c"
        "lesson files/variables.c"
        "lesson files/data_types.c"
        "lesson files/format_specifiers.c"
        "lesson files/constants.c"
        "lesson files/arithmetic_operators.c"
        "lesson files/argumented_operators.c"
        "lesson files/user_input.c"
        "lesson files/math_functions.c"
        "programs/hypotenuse_calculator.c"
        "programs/circle_circumference.c"
        programs/hypotenuse_calculator.c)
