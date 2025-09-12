/*
Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.
*/
#include <stdio.h>

int main() {
    double percentage;

    printf("Enter the percentage (0-100): ");
    if (scanf("%lf", &percentage) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage. Please enter a value between 0 and 100.\n");
        return 1;
    }

    printf("\nResult: Grade ");
    if (percentage >= 90) {
        printf("A\n");
    } else if (percentage >= 80) {
        printf("B\n");
    } else if (percentage >= 70) {
        printf("C\n");
    } else if (percentage >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}