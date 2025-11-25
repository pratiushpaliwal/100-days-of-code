//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>

int findFirstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }
    return result;
}
int findLastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1;

        } else if (nums[mid] < target) {
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }
    return result;

}
int main() {
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    printf("Enter the target : ");
    scanf("%d", &target);

    int first = findFirstOccurrence(nums, n, target);

    if (first == -1) {
        printf("-1,-1\n");
    }
    else {
        int last = findLastOccurrence(nums, n, target);
        printf("%d,%d\n", first, last);
    }



    return 0;
}