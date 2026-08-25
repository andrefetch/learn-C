#include <stdio.h>

int main() {

    int numbers[] = {10, 20, 30, 40, 50, 60, 70};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    printf("%d\n", numbers[4]); // if printed like this (with no index included) it will decay into a pointer
    printf("%c\n", grades[0]);

    printf("%d\n", sizeof(numbers));
    printf("%d\n", sizeof(numbers[0]));

    for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        printf("%d\n", numbers[i]);
    }

    return 0;

}
