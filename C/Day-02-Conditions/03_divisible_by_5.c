#include <stdio.h>

int main() {

    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    if(num % 5 == 0) {
        printf("this number can be divisible by 5");
    }
    else {
        printf("this number cannot be divisible by 5");
    }

    return 0;
}
