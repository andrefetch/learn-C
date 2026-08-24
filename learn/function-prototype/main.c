#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // function prototype
bool ageCheck(int age);

int main() {

    hello("spongebob", 15);

    if(ageCheck(12)){
        printf("You are old enough to work!\n");
    }
    else {
        printf("You must be 18+\n");
    }

    return 0;

}

void hello(char name[], int age) {

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);

}

bool ageCheck(int age) {

    if(age >= 18) {
        return true;
    }
    else {
        return false;
    }

}
