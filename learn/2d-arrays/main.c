#include <stdio.h>

int main() {

    // 2d array = an array where each element in an array
    // array[][] = {{}, {}, {}} aka multidimentional array

    char numpad[][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'},
        {'*', '0', '#'}
    };

    for(int i = 0; i < 4; i++){ // in charge of the rows
        for(int j = 0; j < 3; j++){ // columns
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }

    return 0;

}
