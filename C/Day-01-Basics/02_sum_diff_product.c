#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("\nsum = %d", num1 + num2);
    printf("\ndiff = %d", num1 - num2);
    printf("\nproduct = %d", num1 * num2);

    return 0;
}
