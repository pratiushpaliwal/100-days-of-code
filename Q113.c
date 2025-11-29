/*Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. 
Print the kth smallest element as output.

Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>

int main() {
    int size,k;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements in array: ");
    for (int i=0 ; i<size ; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter value of k: ");
    scanf("%d",&k);

    if (k>size) printf("Invalid Input k should be smaller than size of array");

    int kth_smallest=arr[0];
    for (int i=0 ; i<size ; i++) {
        if (arr[i]<kth_smallest) kth_smallest=arr[i]; // Initialize kth_smallest with the smallest element in array arr[]
    }
    for (int i=1 ; i<k ; i++) {
        int smallest=arr[0];
        for (int j=0 ; j<size ; j++) {
            if (arr[j]==kth_smallest) {
                for (int r=j ; r<size-1 ; r++) {
                    arr[j]=arr[j+1];    // Remove the (i)th smallest element in the array arr[]
                }
            }
            if (arr[j]<smallest) smallest=arr[j];
        } kth_smallest=smallest;
    } printf("%d",kth_smallest);
    return 0;
}