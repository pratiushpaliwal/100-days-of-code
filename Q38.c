//Q38: Write a program to find the sum of digits of a number.


#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    scanf("%d",&n);
    if (n == 0) {
        printf("0");
    }
    if (n < 0) {
        n = -n;
    }
    while (n > 0) {
        int remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    printf("%d",sum);
    return 0;
}