/*
Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.
*/
#include <stdio.h>

int main() {
    int lateDays;
    double fine = 0.0;

    printf("Enter the number of days the book is late: ");
    if (scanf("%d", &lateDays) != 1 || lateDays < 0) {
        printf("Invalid input. Please enter a non-negative number of days.\n");
        return 1;
    }

    if (lateDays <= 0) {
        printf("No fine. The book was returned on time.\n");
    } else if (lateDays <= 5) {
        fine = lateDays * 2.0;
        printf("Fine for %d days is: ₹%.2f\n", lateDays, fine);
    } else if (lateDays <= 10) {
        fine = (5 * 2.0) + ((lateDays - 5) * 4.0);
        printf("Fine for %d days is: ₹%.2f\n", lateDays, fine);
    } else if (lateDays <= 30) {
        fine = (5 * 2.0) + (5 * 4.0) + ((lateDays - 10) * 6.0);
        printf("Fine for %d days is: ₹%.2f\n", lateDays, fine);
    } else {
        printf("\nMore than 30 days late. Membership Cancelled.\n");
    }

    return 0;
}