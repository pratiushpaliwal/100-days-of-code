//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

void addElement(int arr[], int n, int key) {
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > key) {
            pos = i;
            break;
        }
        pos = i + 1;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}


int main() {
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    scanf("%d", &key);
    addElement(arr, n, key);
    printArray(arr, n + 1);
    return 0;
}
