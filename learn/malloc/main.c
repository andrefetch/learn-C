#include <stdio.h>
#include <stdlib.h> // need this header for malloc

int main(void) {

    // malloc() = a function in C that dynamically allocates a specified number of bytes in memory

    int number = 0;
    printf("Enter the amount of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    if(grades == NULL){
        printf("Memory allocation failed.");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%c ", grades[i]);
    }

    free(grades); // returning the "rented" space back to the operating system
    grades = NULL; // avoids dangling pointers

    return 0;

}
