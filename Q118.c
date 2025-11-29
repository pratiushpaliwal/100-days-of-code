/*Q118: Write a program to take an input array of size n. 
The array should contain all the integers between 0 to n except for one. Print that missing number

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int num1[n];
    printf("Enter the elements in array: ");
    for (int i=0 ; i<n ; i++) {
        scanf("%d",&num1[i]);
    }
    for (int i=0 ; i<=n ; i++) {
        int found_element=0;
        for (int j=0 ; j<n ; j++) {
            if ( i == num1[j] ) {
                found_element=1;
                break;
            }
        } if (found_element==0) {
            printf("%d",i);
            break;
        }
    }
    return 0;
}