//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int n1,n2;

    scanf("%d",&n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d",&arr1[i]);
    }

    scanf("%d",&n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d",&arr2[i]);
    }

    int newArr[n1+n2];
    int j = 0;
    for (int i = 0; i < n1+n2; i++) {
       if (i < n1) {
           newArr[i] = arr1[i];
       } else {
           newArr[i] = arr2[j];
           j++;
       }
    }

    for (int i = 0; i < n1+n2; i++) {
        printf("%d ",newArr[i]);
    }

    return 0;
}