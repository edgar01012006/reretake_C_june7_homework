#include <stdio.h>
#include <stdlib.h>

struct Student {
    int number;
    int age;
    float GPA;
};

void input(struct Student* student) {
    printf("enter Student's number\n");
    scanf("%d", &student->number);
    do {
        printf("enter Student's age\n");
        scanf("%d", &student->age);
    } while (student->age < 16 || student->age > 100);
    do {
        printf("Etner Student's GPA\n");
        scanf("%f", &student->GPA);
    } while (student->GPA < 0.0 || student->GPA > 5.0);
}

void output(struct Student* student) {
    printf("Student's number is %d, age is %d, GPA is %.1f\n", student->number, student->age, student->GPA);
}

int main() {
    struct Student student;
    input(&student);
    output(&student);
}
