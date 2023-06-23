#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
};
void swapFields(struct Student* s1, struct Student* s2) {

    char tempName[50];
    strcpy(tempName, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, tempName);


    int tempRollNumber = s1->rollNumber;
    s1->rollNumber = s2->rollNumber;
    s2->rollNumber = tempRollNumber;
}

int main() {
    struct Student student1, student2;

    printf("Enter details for student 1:\n");
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter roll number: ");
    scanf("%d", &(student1.rollNumber));

    printf("\nEnter details for student 2:\n");
    printf("Enter name: ");
    scanf("%s", student2.name);
    printf("Enter roll number: ");
    scanf("%d", &(student2.rollNumber));

    printf("\nBefore swapping:\n");
    printf("Student 1: Name - %s, Roll Number - %d\n", student1.name, student1.rollNumber);
    printf("Student 2: Name - %s, Roll Number - %d\n", student2.name, student2.rollNumber);

    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1: Name - %s, Roll Number - %d\n", student1.name, student1.rollNumber);
    printf("Student 2: Name - %s, Roll Number - %d\n", student2.name, student2.rollNumber);

    return 0;
}