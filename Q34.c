//Q34: Write a program to check if a number is prime.


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Not Prime");
        return 0;
    }
    if (n == 1) {
        printf("Not Prime Nor Composite");
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("Not Prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}