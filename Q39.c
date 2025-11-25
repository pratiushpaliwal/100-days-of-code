//Q39: Write a program to find the product of odd digits of a number.



#include <stdio.h>

int main() {
    int n;
    int product=1;
    scanf("%d",&n);
    if (n == 0) {
        printf("0");
    }
    if (n < 0) {
        n = -n;
    }
    while (n > 0) {
        int rem = n % 10;
        if (rem % 2 == 1) {
            product = product * rem;
        }
        n = n / 10;
    }
    if (product == 1) {
        printf("1 (no odd digits, assume 1)");
    } else {
        printf("%d",product);
    }
    return 0;
}