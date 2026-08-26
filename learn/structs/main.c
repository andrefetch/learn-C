#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student);

int main(void) {

    Student student1 = {"Andre", 19, 3.6, true};
    Student student2 = {"Patrick", 36, 1.6, false};
    Student student3 = {"Squidward", 16, 3.2, true};
    Student student4 = {0};

    strcpy(student4.name, "Sandy");
    strncpy(student4.name, "Sandy", 5);

    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    return 0;

}

void printStudent(Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Fulltime: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}
