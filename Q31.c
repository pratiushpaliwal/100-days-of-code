//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int binary=0, place=1;
    //check if number is zero --> if it is print 0
    if (n==0) {
        printf("0");
        return 0;
    }
    //if negative changes to positive
    if (n < 0) {
        n = -n;
    }
    //binary conversion takes place here
    while (n > 0) {
        int remainder = n % 2;
        binary = binary + (remainder * place);
        place *= 10;
        n = n / 2;
    }
    printf("%d",binary);
    return 0;
}