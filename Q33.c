//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);
    int original_num = n, input = n;
    int i = 0,sum = 0;
    //loop counts number of digits
    while (n != 0) {
        i++;
        n = n / 10;
    }
    // loop to do the sum
    while (input != 0) {
        int rem = input % 10;
        sum += pow(rem,i);
        input = input / 10;
    }
    //check armstrong or not ?
    if (sum == original_num) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }
    return 0;
}