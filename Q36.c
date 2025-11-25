//Q36: Write a program to find the HCF (GCD) of two numbers.


#include <stdio.h>

int main() {
    int num1,num2;
    scanf("%d %d",&num1, &num2);
    int gcd = 0;
    for (int i = 1; i <= ((num2>num1) ? num2 : num1); i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    printf("%d",gcd);
    return 0;
}