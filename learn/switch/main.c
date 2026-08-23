#include <stdio.h>

int main() {

    // switch -> an alternative to using many if else statements more efficient with fixed integer values

    int dayOfWeek = 0;

    printf("Enter a day of the week: (1-7): ");
    scanf("%d", &dayOfWeek);

    switch(dayOfWeek){
        case 1:
            printf("It is monday");
            break;
        case 2:
            printf("It is tuesday");
            break;
        case 3:
            printf("It is wednesday");
            break;
        case 4:
            printf("It is thursday");
            break;
        case 5:
            printf("It is friday");
            break;
        case 6:
            printf("It is saturday");
            break;
        case 7:
            printf("It is sunday");
            break;
        default:
            printf("Please only enter a number (1-7)");
    }

}
