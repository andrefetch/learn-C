#include <stdio.h>
#include <unistd.h> // Linux/mac sleep

int main() {

    // for(Initilization; Condition; Update)

    for(int i = 10; i >= 0; i--){
        sleep(1);
        printf("%d\n", i);
    }

    printf("Happy New Year!\n");

    return 0;

}
