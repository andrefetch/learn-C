#include <stdio.h>

enum Day{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSAY, FRIDAY, SATURDAY
};

enum People {
    ANDRE = 1, SPONGEBOB = 2, GARFIELD = 3
};

typedef enum {
    AM, PM
}Time;

int main() {

    enum Day today = TUESDAY;
    enum People name = ANDRE;
    Time newTime = AM;

    printf("%d\n", today);
    printf("%d\n", name);
    printf("%d\n", newTime);

    if(today == SUNDAY || today == SATURDAY){
        printf("It's the weekend");
    }
    else {
        printf("Not a weekend buddy.\n");
    }

    // can be written with a ternary operator since there is no else if

    printf("%s\n", (today == SUNDAY || today == SATURDAY) ? "Weekend!" : "No Weekend");

    // enum -> a user defined data type that consits ofa  set of named integer constants

    return 0;

}
