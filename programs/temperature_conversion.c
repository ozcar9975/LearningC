//
// Created by Oscar Zhang on 12/18/24.
//

#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C') {
        printf("\nThe temperature is currently in C\n");
    } else if (unit == 'F') {
        printf("\nThe temperature is currently in F\n");
    } else {
        printf("\n%c is not a valid unit of measurement\n", unit);
    }

    return 0;
}