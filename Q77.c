//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("Matrix must be a square matrix.\n");
        return 1;
    }
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isUnique = 1;
    for (int i = 0; i < rows; i++) {
        int element = matrix[i][i];
        for (int j = i + 1; j < cols; j++) {
            if (element == matrix[j][j]) {
                isUnique = 0;
                break;
            }
        }
    }
    if (isUnique) {
        printf("True\n");
    }else {
        printf("False\n");
    }

    return 0;


}