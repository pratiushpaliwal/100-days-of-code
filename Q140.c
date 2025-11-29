/* Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[20];

    printf("Gender=");
    scanf("%s", input);

    if (strcmp(input, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(input, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else {
        printf("Invalid input\n");
        return 0;
    }

    if (p.gender == MALE) {
        printf("Male");
    } else {
        printf("Female");
    }

    return 0;
}
