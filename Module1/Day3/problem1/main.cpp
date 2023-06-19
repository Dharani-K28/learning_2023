#include <stdio.h>

void printPattern1(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (int i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
}

void printPattern2(int n) {
    for (int i = 1; i <= n - 2; i++) {
        printf("%d", i);
    }
    for (int i = 1; i <= (n - 2) * 2; i++) {
        printf(" ");
    }
    for (int i = n - 2; i >= 1; i--) {
        printf("%d", i);
    }
}

void printPattern3(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        printPattern3(n - i + 1);
        
        printPattern2(n - i + 1);
        printPattern1(i);
        
        printf("\n");
    }

    return 0;
}
