#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age) {
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear %s!", name);
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nYou are %d years old!\n", age);
}

int main() {

    // function = a resuable section of code that can be invoked "called" upon
    // arguments can be sent to a function so that it can use them

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);

    return 0;

}
