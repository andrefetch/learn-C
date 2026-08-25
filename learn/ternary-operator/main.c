#include <stdio.h>
#include <stdbool.h>

int main() {

    // ternary operator ? = short hand for if else statements
    // (condition) ? value_if_true : value_if_false

    int x = 5;
    int y = 7;
    int max = (x > y) ? x : y;
    printf("%d\n", max);

    bool isOnline = true;

    printf("%s\n", (isOnline) ? "online!" : "offline!");

    int number = 9;

    printf("%d is %s\n", number, (number % 2 == 0) ? "even" : "odd");

    int age = 21;

    printf("You are %d which means you are a(n): %s\n", age, (age > 18) ? "adult" : "child");

    int hours = 12;
    int minutes = 30;

    printf("%02d:%02d:%02s\n", hours, minutes, (hours < 12) ? "AM" : "PM");

    return 0;

}
