//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

void matrixPopulate(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void matrixMultiplication(int rows1, int cols1, int rows2,
                          int cols2,int multiply[rows1][cols2],  int matrix1[rows1][cols1], int matrix2[rows2][cols2]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            multiply[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                multiply[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1;
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];
    matrixPopulate(rows1, cols1, matrix1);

    int rows2, cols2;
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];
    matrixPopulate(rows2, cols2, matrix2);

    if (cols1 != rows2) {
        printf("Matrix Multiplication Not Possible\n");
        return 1;
    }

    int multiply[rows1][cols2];
    matrixMultiplication(rows1, cols1, rows2, cols2,multiply, matrix1, matrix2);

    printMatrix(rows1, cols2, multiply);

    return 0;
}
