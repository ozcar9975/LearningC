//
// Created by Oscar Zhang on 12/13/24.
//

#include <stdio.h>

int main() {

    int x;          // declaration
    x =123;         // initialization
    int y = 321;    // declaration + initialization

    int age = 20;           // integer
    float gpa = 3.90;       // floating point number
    char grade = 'A';       // single character
    char name[] = "Oscar";  // array of characters aka a string

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your GPA is %f\n", gpa);

}