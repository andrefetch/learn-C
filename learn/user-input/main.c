#include <stdio.h>
#include <string.h>

int main() {

    // declared variables but with no data stored in them.
    // without it being assinged to anything we have un-defined behavior
    // -> printing things like -1782857796
    //                         0.000000
    //                         ��
    // randomizes everytime with random behavior

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // null terminator
    char name[30] = ""; // 30 bytes aka 30 chars

    printf("Enter your age: ");
    scanf("%d", &age); // & means the address of the variable age, at the address of the var age, we will stick a value there

    printf("Enter your gpa: ");
    scanf("%f", &gpa); // address of operator

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar(); // clears the newline character within the input buffer
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // scanf can't read any whitespaces | fgets means file get string, we can use sizeof() to calculate the size of the
                                      // var so we don't have to change it manually here.

    // fgets puts into the input buffer as a new line so if name is getting redeclared and is printed first it will output as name = "name\n"

    name[strlen(name) - 1] = '\0'; // removes the newline caused by the fget function

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;

}
