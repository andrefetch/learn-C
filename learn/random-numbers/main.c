#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // psuedo-random = appears random but are determined by a mathematical formula that uses a seed
    // value to generate a predictable sequence of numbers. Advanced: hardware entrory

    srand(time(NULL));

    int min = 50;
    int max = 100;

    int randomNum = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;


    printf("%d %d %d", randomNum, randomNum2, randomNum3);

    return 0;

}
