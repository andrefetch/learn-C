#include <stdio.h>

int main() {

    // operators = + - * / % ++ --

    int x = 10;
    int y = 3;
    int z = 0;

    z = x + y;

    // addition
    printf("%d\n", z);

    // subtraction
    z = x - y;
    printf("%d\n", z);

    // multiplication
    z = x * y;
    printf("%d\n", z);

    // division
    z = x / y;
    printf("%d\n", z);

    // modulo operator
    z = x % y;
    printf("%d\n", z);

    // increment and decrement operator

    x++;
    printf("%d\n", x);

    x--;
    printf("%d\n", x);

    // reassingment
    x += 2;
    x = x + 2;

    printf("%d\n", x);

    return 0;

}
