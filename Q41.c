//Q41: Write a program to swap the first and last digit of a number.


#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int last_digit = n%10;
    int new_num=0;

    new_num = last_digit;
    int temp = n/10;

    while (temp>0) {
        new_num *= 10;
        int digit = temp % 10;
        new_num += digit;
        temp = temp/10;
    }
    printf("%d",new_num);
    return 0;
}