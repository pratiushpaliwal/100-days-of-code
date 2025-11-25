//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.


#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    double sum = 0;
    double denominator = -1;

    for (int i = 2; i <= (2*n); i += 2) {
        double temp = i;
        denominator += 4;
        double add = temp / denominator;
        sum += add;
    }
    printf("Approximate sum: %.2lf",sum);
    return 0;
}