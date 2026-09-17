#include <stdio.h>

int main() {

    int maths, history, english;
    float total, percentage;

    printf("Enter maths marks: ");
    scanf("%d", &maths);

    printf("Enter history marks: ");
    scanf("%d", &history);

    printf("Enter english marks: ");
    scanf("%d", &english);

    total = maths + history + english;

    percentage = (total / 300) * 100;

    printf("\ntotal marks is %f", total);
    printf("\npercentage is %f", percentage);

    if(percentage >= 40) {
        printf("\nPass");
    }
    else {
        printf("\nFail");
    }

    return 0;
}
