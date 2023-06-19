#include <stdio.h>

void SmallestAndLargestDigits(int n, int numbers[]) {
    int smallest = 9;
    int largest = 0;
    int isValid = 1; 

    for (int i = 0; i < n; i++) {
        int num = numbers[i];

        
        while (num > 0) {
            int digit = num % 10;

            if (digit < smallest) {
                smallest = digit;
            }

            if (digit > largest) {
                largest = digit;
            }

            num /= 10;
        }

        
        if (numbers[i] <= 0) {
            isValid = 0;
            break;
        }
    }

    if (isValid) {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }
    else {
        printf("Not Valid\n");
    }
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf_s("%d", &n);

    int numbers[100]; 

    printf("Enter the values:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &numbers[i]);
    }

    SmallestAndLargestDigits(n, numbers);

    return 0;
}
