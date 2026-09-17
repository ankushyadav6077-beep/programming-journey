#include <stdio.h>

int main() {

    float percentage;

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if(percentage < 0 || percentage > 100) {
        printf("Invalid percentage\n");
    }
    else if(percentage >= 90) {
        printf("Grade is A\n");
    }
    else if(percentage >= 75) {
        printf("Grade is B\n");
    }
    else if(percentage >= 60) {
        printf("Grade is C\n");
    }
    else if(percentage >= 40) {
        printf("Grade is D\n");
    }
    else {
        printf("Grade is F\n");
    }

    return 0;
}
