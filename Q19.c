/*
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/
#include <stdio.h>

int main() {
    double side1, side2, side3;

    printf("Enter the lengths of the three sides: ");
    if (scanf("%lf %lf %lf", &side1, &side2, &side3) != 3) {
        printf("Invalid input. Please enter three numbers.\n");
        return 1;
    }

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("\nInvalid triangle: All side lengths must be positive.\n");
    } else if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("\nInvalid triangle: The sum of any two sides must be greater than the third.\n");
    } else {
        printf("\nThe triangle is: ");
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    }

    return 0;
}