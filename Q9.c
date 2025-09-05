/*
Write a program to calculate simple and compound interest for given principal, rate, and time.
*/
#include <stdio.h>
#include <math.h>  // Required for pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    compoundInterest = principal * pow((1 + rate / 100), time) - principal;
 
    printf("\nSimple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
