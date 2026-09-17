#include <stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age < 13) {
        printf("child");
    }
    else if(age >= 13 || age <= 19) {
        printf("Teenager");
    }
    else {
        printf("Adult");
    }

    return 0;
}
