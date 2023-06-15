#include <stdio.h>

void Exponent(double num) {
    unsigned long long* ptr = (unsigned long long*) & num;
    unsigned long long exponent = (*ptr & 0x7FF0000000000000ULL) >> 52;

    printf("Exponent in Hexadecimal: 0x%llx\n", exponent);

    printf("Exponent in Binary: 0b");
    for (int i = 11; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1ULL;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    Exponent(x);
    return 0;
}
