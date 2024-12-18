//
// Created by Oscar Zhang on 12/17/24.
//

#include <stdio.h>
#include <math.h>

int main() {

    const double PI = 3.141592653589793;
    double radius;
    double circumference;
    double area;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    printf("\nCircumference: %.2lf\n", circumference);

    area = PI * pow(radius, 2);
    printf("Area: %.2lf\n", area);

    return 0;
}