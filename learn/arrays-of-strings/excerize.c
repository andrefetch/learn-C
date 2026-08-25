#include <stdio.h>
#include <string.h>

int main() {

    // excerize

    char names[4][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);

    for(int i = 0; i < rows; i++) {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for(int i = 0; i < rows; i++){
        printf("%s\n", names[i]);
    }

    return 0;

}
