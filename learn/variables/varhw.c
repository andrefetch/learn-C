#include <stdio.h>
#include <stdbool.h>

/*
 * Homework: make an int, float, double, char, char[], bool
 */

int main() {

    int age = 19;
    float gpa = 3.6;
    double longNumber = 983219283498;
    char symbol = '!';
    char name[] = "Andre";
    bool isStudent = true;

    printf("Your age is: %d\n", age);
    printf("Your gpa is: %.1f\n", gpa);
    printf("A very long number is: %.15lf\n", longNumber);
    printf("A symbol is %c\n", symbol);
    printf("Your name is: %s\n", name);
    printf("You are a student %b\n: ", isStudent);

    return 0;

}
