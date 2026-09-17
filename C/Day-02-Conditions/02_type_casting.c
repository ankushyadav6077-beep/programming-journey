#include <stdio.h>

int main() {

    int a = 5;
    int b = 2;

    float x = a / b;
    float y = (float)a / b;

    printf("\n%.2f", x);
    printf("\n%.2f", y);

    return 0;
}
