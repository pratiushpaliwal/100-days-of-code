//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int input=0;
    int output = -1;
    scanf("%d", &input);
    for (int i = 0; i < n; i++) {
        if (arr[i] == input) {
            output = i;
        }
    }
    printf("Found at index %d\n", output);
    return 0;
}