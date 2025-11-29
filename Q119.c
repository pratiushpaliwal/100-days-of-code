/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. 
Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int nums1[size];            
    printf("Enter the elements in array: ");  
    for (int i=0 ; i<size ; i++) {
        scanf("%d",&nums1[i]);
    }
    int repeated_element[1000]={0};
    for (int i=0 ; i<size ; i++) {
        if (repeated_element[nums1[i]] == 1) {
            printf("%d",nums1[i]);
        } repeated_element[nums1[i]] = 1;
    }
    return 0;
}