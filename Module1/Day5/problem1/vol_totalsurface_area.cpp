#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box* box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box box;
    struct Box* ptrBox = &box;


    printf("Enter the length of the box: ");
    scanf("%lf", &(ptrBox->length));
    printf("Enter the width of the box: ");
    scanf("%lf", &(ptrBox->width));
    printf("Enter the height of the box: ");
    scanf("%lf", &(ptrBox->height));


    printf("Volume of the box: %.2lf\n", calculateVolume(ptrBox));
    printf("Surface area of the box: %.2lf\n", calculateSurfaceArea(ptrBox));

    return 0;
}