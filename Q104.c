//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);

    int total = n * (n + 1) / 2;

    for (int x = 1; x <= n; x++) {
        int left_sum = x * (x + 1) / 2;
        int right_sum = total - (x * (x - 1) / 2);

        if (left_sum == right_sum) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}