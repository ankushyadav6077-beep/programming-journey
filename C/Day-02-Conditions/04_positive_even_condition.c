#include <stdio.h>

int main() {

    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    if(num >= 0 && num % 2 == 0) {
        printf("Positive Even");
    }
    else {
        printf("Does not satisfy condition");
    }

    return 0;
}
