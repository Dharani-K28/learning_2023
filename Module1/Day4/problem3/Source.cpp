#include <stdio.h>
#define N 1000

int main() {
    int arr[N], n;
    printf("Enter the size of the array: ");
    scanf_s("%d", &n);
    printf("Enter an array: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    printf("Reversed array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}