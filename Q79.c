//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b , int c) {
    if (a <= b && a <= c) {
        return a;
    } else if (b <= a && b <= c) {
        return b;
    } else {
        return c;
    }

}

int MIN(int a, int b) {
    return a < b ? a : b;
}


void diagonal_transversal(int rows, int cols, int matrix[rows][cols], int arr[rows * cols]) {
    int diagonals = rows + cols - 1;
    int index = 0;
    for (int i = 1; i <= diagonals; i++) {
        int startCol = max(0, i - rows);
        int count = min(i, cols - startCol, rows);

        int temp[count];
        for (int j = 0; j < count; j++) {
            int n = MIN(rows, i) - j - 1; // row
            int m = startCol + j;         // col
            temp[j] = matrix[n][m];
        }

        if (i % 2 == 1) {
            for (int j = 0; j < count; j++) {
                arr[index++] = temp[j];
            }
        } else {
            for (int j = count - 1; j >= 0; j--) {
                arr[index++] = temp[j];
            }
        }
    }

}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int arr[rows * cols];
    diagonal_transversal(rows, cols, matrix, arr);
    printArray(arr, rows * cols);

    return 0;
}
