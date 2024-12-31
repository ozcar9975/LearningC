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
    float take_home = gross_pay;

    printf("\nGross Pay Information\n");
    printf("You will make $%'.2f per week.\n", gross_pay_weekly);
    printf("You will make $%'.2f per year.\n\n", gross_pay);

    // deductions
    float social_security_tax = take_home * 0.06;
    take_home -= social_security_tax;

    float medicare = take_home * 0.02;
    take_home -= medicare;

    float wage_tax = take_home * 0.12;
    take_home -= wage_tax;

    float state_tax = take_home * 0.0307;
    take_home -= state_tax;

    float philly_tax = take_home * 0.0375;
    take_home -= philly_tax;

    float insurance = 396 * 12;
    take_home -= insurance;

    // print results
    printf("Taxes and Deductions\n");
    printf("You will pay $%.2f in Social Security Taxes.\n", social_security_tax);
    printf("You will pay $%.2f in Medicare Taxes.\n", medicare);
    printf("You will pay $%.2f in IRS Taxes.\n", wage_tax);
    printf("You will pay $%.2f in PA State Taxes.\n", state_tax);
    printf("You will pay $%.2f in Phila Taxes.\n", philly_tax);
    printf("You will pay $%.2f for health insurance.\n\n", insurance);

    // calculations of net pay
    float weekly_take_home = take_home / weeks;
    float hourly_take_home = weekly_take_home / hours;
    float ratio = (take_home / gross_pay) * 100;

    // print results of net pay
    printf("Net Pay Information\n");
    printf("Your take home pay will be $%.2f per year.\n", take_home);
    printf("This is an hourly take home pay of $%.2f.\n", hourly_take_home);
    printf("This is a weekly take home pay of $%.2f.\n", weekly_take_home);
    printf("Your Net Pay is %.2f precent of your Gross Pay.\n", ratio);

    return 0;

}