//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum[rows];

    for (int i = 0; i < rows; i++) {
        sum[i] = 0;
        for (int j = 0; j < cols; j++) {
            sum[i] += arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}