//Q50: Write a program to print the following pattern:
/*

***** //0
  **** //2
    *** //4
      ** //6
        *

Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main() {

  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= (2*i) - 2; j++) {
      printf(" ");
    }
    for (int j = 1; j <= (6-i); j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}