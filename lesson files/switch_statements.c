//
// Created by Oscar Zhang on 12/18/24.
//

#include <stdio.h>

int main() {

    // switch = A more efficient alternative to using many "else if" statements
    //                 allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did alright.\n");
            break;
        case 'D':
            printf("Not an F at least.\n");
            break;
        case 'F':
            printf("FAILED!!!\n");
            break;
        default:
            printf("Please enter only valid grades.\n");
    }

    return 0;
}