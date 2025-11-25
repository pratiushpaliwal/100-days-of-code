//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int n,place = 1,binary = 0,digit_count = 0;
    scanf("%d",&n);

    if (n == 0) {
        digit_count = 1;
    } else {
        int temp = n;
        while (temp > 0) {
            digit_count++;
            temp /= 10;
        }
    }

    if (n == 0) {
        printf("0");
        return 0;
    }
    while (n > 0) {
        int bit = n % 10;
        int flipped_bit;
        if (bit == 0) {
            flipped_bit = 1;
        }else if (bit == 1) {
            flipped_bit = 0;
        }else {
            printf("Error: Invalid binary input\n");
            return 1;
        }
        binary = binary + (flipped_bit*place);
        place *= 10;
        n = n / 10;
    }
    printf("%0*d\n",digit_count,binary);
    return 0;
}