/*Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. 
Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <stdio.h>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements in array: ");
    for (int i=0 ; i<size ; i++) {
        scanf("%d",&arr[i]);
    }

    int current_max=arr[0],global_max=arr[0];
    for (int j=1 ; j<size ; j++) {
        if (arr[j] < current_max + arr[j]) 
            current_max=current_max + arr[j];
        else 
            current_max=arr[j];
        if (current_max > global_max) 
            global_max=current_max;
    } printf("%d",global_max);
    return 0;
}