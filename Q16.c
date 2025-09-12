/*
Write a program to input three numbers and find the largest among them using if–else.
*/
#include <stdio.h>

int main() {
    double num1, num2, num3;

    printf("Enter three numbers: ");
    if (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter three numbers.\n");
        return 1;
    }

    if (num1 >= num2 && num1 >= num3) {
        printf("\nResult: %.2lf is the largest number.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("\nResult: %.2lf is the largest number.\n", num2);
    } else {
        printf("\nResult: %.2lf is the largest number.\n", num3);
    }

    return 0;
}