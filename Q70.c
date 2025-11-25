//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

void arrayShift(int arr[], int n, int pos) {
    int tempArr[n];
    for (int i = 0; i < n; i++) {
        tempArr[i] = arr[i];
    }

    for (int i = n - 1 ; i >= pos; i--) {
        arr[i] = arr[i - pos];
    }

    for (int i = 0; i < pos; i++) {
        arr[i] = tempArr[n - 2 + i];
    }


}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos;
    scanf("%d", &pos);

    arrayShift(arr, n, pos);
    printArray(arr, n);

    return 0;
}