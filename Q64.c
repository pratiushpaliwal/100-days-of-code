//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {

    long n;
    scanf("%d",&n);
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};

    if (n == 0) {
        return 0;
    }
    if (n < 0) {
        n = -n;
    }

    while(n > 0) {
        int rem = n % 10;
        arr[rem] += 1;
        n = n / 10;
    }

    int maxFrequency = arr[0];
    int digit = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > maxFrequency) {
            maxFrequency = arr[i];
            digit = i;
        }
    }

    printf("%d",digit);

    return 0;
}