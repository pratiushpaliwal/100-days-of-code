//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    int length,width;
    scanf("%d %d",&length,&width);
    printf("Area=%d, Perimeter=%d",length*width,2*(length+width));
}