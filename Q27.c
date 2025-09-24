/*
Write a program to print the sum of the first n odd numbers.
*/
#include <stdio.h>

int main() {
    int n, i = 1, count = 0, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (count < n) {
        sum = sum + i; 
        i = i + 2;     
        count++;       
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}