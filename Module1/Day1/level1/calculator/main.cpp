

#include<stdio.h>


int main() {
    float num1, num2;
    char  operator;

    printf("Enter num 1: ");
    scanf_s("%f", &num1);

    printf("Enter Operator:  ");
    scanf_s(" %c", &operator);

    printf("Enter num2 2: ");
    scanf_s("%f", &num2);
    float result;
    switch (operator) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Invalid operator\n");
        return 1;
    }

    printf("Result: %f\n", result);

    return 0;
}
