/*Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

/* The question says to convert string in sentence case but in sample test cases the input is already in sentence case
(where first letter should be in capital) and the output is in title case (where each word starts with capital letter).
So i am generating a code to covert a sentence case in title case.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    printf("str = ");
    fgets(str,500,stdin);

    str[0]=toupper(str[0]);
    for (int i=1 ; i!='\0' ; i++) {
        if (str[i] == '\n') break;
        if (str[i]==' ') {
            str[i+1]=toupper(str[i+1]);
        }
    }
    printf("%s",str);
}