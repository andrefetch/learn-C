#include <stdio.h>
#include <stdbool.h>

int main() {

    // logical operators
    //
    // && and
    // || or
    // ! not

    /*
    int temp = 0;

    if (temp <= 0 || temp > 30) {
        printf("The temperature is BAD");
    }
    else {
        printf("The temp is GOOD");
    }
    */

    bool isSunny = true;

    if(!isSunny){
        printf("It is cloudy!");
    }
    else{
        printf("it is sunny.");
    }

    return 0;

}
