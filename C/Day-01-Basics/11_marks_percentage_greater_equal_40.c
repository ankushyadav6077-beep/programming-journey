#include <stdio.h>

int main() {

    int sub1, sub2, sub3;
    float total, percentage;

    printf("Enter sub1 marks: ");
    scanf("%d", &sub1);

    printf("Enter sub2 marks: ");
    scanf("%d", &sub2);

    printf("Enter sub3 marks: ");
    scanf("%d", &sub3);

    total = sub1 + sub2 + sub3;
    percentage = (total / 300.0) * 100;

    printf("\ntotal marks is %.2f", total);
    printf("\npercentage is %.2f", percentage);

    if(percentage >= 40) {
        printf("\nPass");
    }
    else {
        printf("\nFail");
    }

    return 0;
}
