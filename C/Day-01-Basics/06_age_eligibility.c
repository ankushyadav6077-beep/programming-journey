#include <stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("\nEligible");
    }
    else {
        printf("\nNot Eligible");
    }

    return 0;
}
