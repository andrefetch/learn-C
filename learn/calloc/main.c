#include <stdio.h>
#include <stdlib.h>

int main() {

    // calloc() = contigious allocation.
    //            Allocates memory dynamically and sets all allocated bytes to 0.
    //            malloc() is faster, nut calloc() leads to less bugs
    //            calloc(#, size);

    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    int *scores = calloc(number, sizeof(int));

    if(scores == NULL){
        printf("Allocation Error");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL; // removes dangling pointer

    return 0;

}
