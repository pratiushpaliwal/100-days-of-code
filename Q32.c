//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int input,num;
    int reversed_value=0,remainder=0;
    scanf("%d",&input);
    num=input;
    while (input!=0) {
        remainder = input % 10;
        reversed_value = (reversed_value * 10) + remainder;
        input = input / 10;
    }
    if (num==reversed_value) {
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }
    return 0;
}