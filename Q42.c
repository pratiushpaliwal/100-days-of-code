//Q42: Write a program to check if a number is a perfect number.


#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (n == sum) {
        printf("Perfect number");
    } else {
        printf("Not perfect number");
    }
    return 0;
}