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

    int sizeNumpadFirst = sizeof(numpad) / sizeof(numpad[0]);
    int sizeNumpadSecond = sizeof(numpad[0]) / sizeof(numpad[0][0]);

    for(int i = 0; i < sizeNumpadFirst; i++){ // in charge of the rows
        for(int j = 0; j < sizeNumpadSecond; j++){ // columns
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }

    return 0;

}
