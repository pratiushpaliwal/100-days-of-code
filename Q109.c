/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Invalid input: k cannot be greater than array size\n");
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += arr[i];

    int max_sum = sum;

    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];
        if (sum > max_sum)
            max_sum = sum;
    }

    printf("%d\n", k, max_sum);

    return 0;
}
