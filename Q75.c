//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main() {

    int rows1, cols1;
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    int rows2, cols2;
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (cols1 != cols2 || rows1 != rows2) {
        printf("Order of matrix must be same for addition\n");
        return 1;
    } else {
        int add[rows1][cols1];
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols1; j++) {
                add[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols1; j++) {
                printf("%d ", add[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}