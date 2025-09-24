#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; 
    int found = 0;        

    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 2; 
    while (i <= n) {
        product = product * i; 
        found = 1;            
        i = i + 2;           
    }

    if (found)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers between 1 and %d\n", n);

    return 0;
}