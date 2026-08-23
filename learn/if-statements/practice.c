#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*int main() {

    bool isStudent = false;

    if(isStudent) {
        printf("You are a student!\n");
    }
    else{
        printf("You are NOT a student!\n");
    }

    return 0;

}
*/

int main() {

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0) { // since w/o the removal of the last newline char technically it counts as 1 char, so removal and set to a null terminator removes that.
        printf("You did not enter your name\n");
    }
    else{
        printf("Hello %s\n", name);
    }

    return 0;

}
