/*
Write a program to calculate the factorial of a number.
*/
#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1; 
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        i = 1;
        while (i <= n) {     
            factorial = factorial * i;
            i++;
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}