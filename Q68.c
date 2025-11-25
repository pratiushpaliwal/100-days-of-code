//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

void deleteElement(int arr[], int n, int pos) {
    for (int i = pos; i < n; i++) {
        arr[i] = arr[i + 1];
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
    int pos = 0;
    scanf("%d", &pos);
    deleteElement(arr, n, pos);
    printArray(arr, n - 1);
    return 0;
}