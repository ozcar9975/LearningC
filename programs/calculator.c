//
// Created by Oscar Zhang on 12/19/24.
//

#include <stdio.h>

int main() {

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("\nEnter number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter number 2: \n");
    scanf("%lf", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result: %lf", result);
            break;
        default:
            printf("You're operator input was not valid!");

    }

    return 0;
}