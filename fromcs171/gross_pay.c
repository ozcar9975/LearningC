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
    printf("You will make $%'.2f per week.\n", gross_pay_weekly);
    printf("You will make $%'.2f per year.\n", gross_pay);

    // deductions
    float social_security_tax = gross_pay * 0.06;
    gross_pay -= social_security_tax;

    float medicare = gross_pay * 0.02;
    gross_pay -= medicare;

    float wage_tax = gross_pay * 0.12;
    gross_pay -= wage_tax;

    float state_tax = gross_pay * 0.0307;
    gross_pay -= state_tax;

    float philly_tax = gross_pay * 0.0375;
    gross_pay -= philly_tax;

    gross_pay -= 4752.0;

    // print results

    return 0;

}