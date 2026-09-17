#include <stdio.h>

int main() {

    int length, width;
    float area;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    area = length * width;

    printf("Area of a rectangle is %.2f", area);

    return 0;
}
