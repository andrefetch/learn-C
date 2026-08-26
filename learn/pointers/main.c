#include <stdio.h>

void birthday(int* age);

int main(void) {

    // pointer = A variable that stores the memory of address of another variable.
    //           Benefit: They help avoid wasting memory by allowing you to pass
    //           the address of a large data structure instead of copying the entire data.

    int age = 25;
    int* pAge = &age; // * here declares a pointer, not a dereference

    printf("%s\n", (&age == pAge) ? "Same reference" : "No");
    printf("%p\n", &age);
    printf("%p\n", pAge);

    birthday(pAge);

    printf("You are %d years old\n", age);

    return 0;

}

void birthday(int* age) {
    // passed by value, we change the copy | so we have to pass by reference
    (*age)++;
}
