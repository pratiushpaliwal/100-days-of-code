//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>



int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("Matrix must be square matrix\n");
        return 1;
    }
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int transpose[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}