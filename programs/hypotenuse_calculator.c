//
// Created by Oscar Zhang on 12/17/24.
//

#include <stdio.h>
#include <math.h>

int main() {

    double A;
    double B;
    double C;

    printf("What is the length of side A?\n");
    scanf("%lf", &A);

    printf("What is the length of side B?\n");
    scanf("%lf", &B);

    C = sqrt(pow(A, 2) + pow(B, 2));

    printf("The length of side C is %.5lf\n", C);

    return 0;
}