/*Q117: Write a program to take two sorted arrays of size m and n as input. 
Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

int main() {
    int m,n;

    printf("Enter size of array 1: ");
    scanf("%d",&m);

    int num1[m];
    printf("Enter numbers in array 1 (in sorted way): ");
    for (int i=0  ; i<m ; i++){
        scanf("%d",&num1[i]);
    }

    printf("Enter size of array 2: ");
    scanf("%d",&n);

    int num2[n];
    printf("Enter numbers in array 2 (in sorted way): ");
    for (int i=0  ; i<n ; i++){
        scanf("%d",&num2[i]);
    }

    int merged_array[m+n];
    for (int i=0 ; i<m  ; i++) {
        merged_array[i] = num1[i];
    }
    for (int i=0 ; i<n ; i++) {
        merged_array[m+i] = num2[i];
    }
    for (int i=0 ; i< (m+n-1) ; i++) {
        for (int j=0 ; j< (m+n-1-i) ; j++) {
            if (merged_array[j] > merged_array[j+1]) {
                int temp = merged_array[j];
                merged_array[j] = merged_array[j+1];
                merged_array[j+1]= temp;
            }
        }
    }
    for (int i=0 ; i< (m+n) ; i++) {
        printf("%d ",merged_array[i]);
    }
    return 0;
}