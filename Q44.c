//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.


#include  <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    double sum = 1;

    for(int i = 3; i <= (2*n)-1; i++) {
        if(i % 2 != 0) {
            double temp = i;
            double add = (temp / (temp+1));
            sum += add;
        }
    }
    printf("Approximate sum: %.1lf",sum);

    return 0;
}