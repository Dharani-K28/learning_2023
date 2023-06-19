#include <stdio.h>

void printBits(int num) {
    // Size of an integer in bits
    int bits = sizeof(int) * 8;

    // Iterate through each bit
    for (int i = bits - 1; i >= 0; i--) {
        // Extract the i-th bit using bitwise AND operator
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a 32-bit integer: ");
    scanf_s("%d", &num);

    printf("Bits representation: ");
    printBits(num);

    return 0;
}
