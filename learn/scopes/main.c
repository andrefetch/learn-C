#include <stdio.h>

// LEGB !

int result = 0; // global (BAD PRACTICE!)

int add(int x, int y) {

    int result = x + y;
    return result;

}

int subtract(int x, int y) {

    int result = x - y;
    return result;

}

int main() {

    int x = 5;
    int y = 6;

    int result = add(3, 4);
    int result2 = subtract(4, 3);

    printf("%d\n", result);

    return 0;

}
