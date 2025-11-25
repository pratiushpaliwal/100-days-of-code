//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool rotation(char str1[] , char str2[] ) {
    int n = strlen(str1);


    for (int i = 0; i < n; i++) {
        if (strcmp(str1, str2) == 0 ) {
            return true;
        }
        char last = str1[n- 1];
        for (int j = n - 1 ; j > 0; j--) {
            str1[j] = str1[j - 1];
        }
        str1[0] = last;



    }
}

int main() {
    char str1[100];
    scanf("%s", str1);
    char str2[100];
    scanf("%s", str2);
    bool result = rotation(str1, str2);
    if (result) {
        printf("Rotation");
    } else {
        printf("Not Rotation");
    }

    return 0;
}
