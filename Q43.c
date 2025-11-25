//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int original_num=n;
    int sum = 0;

    if(n%2==0) {
        printf("0");
    }
    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        int factorial = 1;
        int rem = n % 10;
        for (int i = 1; i <= rem; i++) {
            factorial *= i;
        }
        sum += factorial;
        n = n / 10;
    }
    if (original_num == sum) {
        printf("Strong number");
    } else {
        printf("Not Strong number");
    }
    return 0;
}