#include <stdio.h>

int getMax(int x, int y) {

    if(x >= y) {
        return x;
    }
    else {
        return y;
    }

}

int main() {

    int max = getMax(2, 4);
    printf("The max is %d\n", max);

    return 0;

}
