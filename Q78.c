//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main() {
    int rows,cols;
    scanf("%d %d",&rows,&cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    int diagonalElements[rows];
    for (int i = 0; i < rows; i++) {
        diagonalElements[i] = matrix[i][i];
    }
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += diagonalElements[i];
    }
    printf("%d\n",sum);
    return 0;
}