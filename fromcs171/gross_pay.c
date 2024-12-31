//
// Created by Oscar Zhang on 12/30/24.
//

#include <stdio.h>

int main() {

    printf("Welcome to Gross and Net Pay Estimator.\n");

    // initialize vars
    float wage;
    int hours, weeks;

    // get inputs
    printf("Enter Hourly Wage in dollars (float):\n");
    scanf("%f", &wage);

    printf("Enter Hours Per Week (integer):\n");
    scanf("%d", &hours);

    printf("Enter Weeks Per Year Worked (integer):\n");
    scanf("%d", &weeks);

    // calculations
    float gross = wage * hours * weeks;
    printf("%f", gross);



    return 0;

}