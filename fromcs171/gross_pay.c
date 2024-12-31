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

    // gross pay calculation
    float gross_pay_weekly = wage * hours;
    float gross_pay = gross_pay_weekly * weeks;

    printf("Gross Pay Information\n");
    printf("You will make $%.2f per week.\n", gross_pay_weekly);
    printf("You will make $%.2f per year.\n", gross_pay);

    // dudcutions


    return 0;

}