/*Q129: A file numbers.txt contains a list of integers separated by spaces. 
Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/

#include <stdio.h>

int main() {
    FILE *fp;
    fp= fopen("numbers.txt","r");
    if (fp == NULL) {
        printf("Error in opening a file.");
        return 0;
    }
    int num, sum=0, count=0;
    while (fscanf(fp, "%d", &num) != EOF) {
        sum = sum + num;
        count++;
    }
    float average = (float)sum / count;
    fclose(fp);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);
    return 0;
}