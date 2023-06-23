#include <stdio.h>

struct Complex {
    double real;
    double imaginary;
};

void readComplexNumber(struct Complex* c) {
    printf("Enter the real part: ");
    scanf("%lf", &(c->real));
    printf("Enter the imaginary part: ");
    scanf("%lf", &(c->imaginary));
}

void writeComplexNumber(struct Complex* c) {
    printf("Complex number: %.2lf + %.2lfi\n", c->real, c->imaginary);
}

struct Complex addComplexNumbers(struct Complex* c1, struct Complex* c2) {
    struct Complex result;
    result.real = c1->real + c2->real;
    result.imaginary = c1->imaginary + c2->imaginary;
    return result;
}

struct Complex multiplyComplexNumbers(struct Complex* c1, struct Complex* c2) {
    struct Complex result;
    result.real = c1->real * c2->real - c1->imaginary * c2->imaginary;
    result.imaginary = c1->real * c2->imaginary + c1->imaginary * c2->real;
    return result;
}

int main() {
    struct Complex complex1, complex2;


    printf("Enter the first complex number:\n");
    readComplexNumber(&complex1);
    printf("Enter the second complex number:\n");
    readComplexNumber(&complex2);


    printf("\nFirst complex number:\n");
    writeComplexNumber(&complex1);
    printf("Second complex number:\n");
    writeComplexNumber(&complex2);


    struct Complex sum = addComplexNumbers(&complex1, &complex2);
    printf("\nSum of the complex numbers:\n");
    writeComplexNumber(&sum);


    struct Complex product = multiplyComplexNumbers(&complex1, &complex2);
    printf("Product of the complex numbers:\n");
    writeComplexNumber(&product);

    return 0;
}