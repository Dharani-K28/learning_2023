#include <stdio.h>

void swap(void* a, void* b) {
    void* temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    printf(" num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    float x = 3.14, y = 2.71;
    printf(" x = %f, y = %f\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %f, y = %f\n", x, y);

    char c1 = 'A', c2 = 'B';
    printf(" c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2);
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
