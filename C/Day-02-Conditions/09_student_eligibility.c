#include <stdio.h>

int main() {

    int age, is_student;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("are you student?(1 is YES, 0 for NO): ");
    scanf("%d", &is_student);

    if(age >= 18 && is_student == 1) {
        printf("Eligible");
    }
    else {
        printf("Not Eligible");
    }

    return 0;
}
