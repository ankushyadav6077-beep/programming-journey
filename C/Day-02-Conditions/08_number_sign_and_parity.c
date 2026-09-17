#include <stdio.h>

int main() {

    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    if(num > 0 && num % 2 == 0) {
        printf("Positive Even");
    }
    else if(num > 0) {
        printf("Positive Odd");
    }
    else if(num < 0) {
        printf("Negative");
    }
    else {
        printf("Zero");
    }

    return 0;
}
