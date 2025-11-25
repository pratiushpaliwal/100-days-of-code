//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int binarySearch(int arr[], int key , int n) {
    int low = 0;
    int high = n-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (key == arr[mid]) {
            return mid;
        }else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for ( int i = 0; i < n ; i++) {
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    printf("Found at index %d", binarySearch(arr, key, n));

}