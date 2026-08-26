#include <stdio.h>

int main(void) {

    // WRITE A FILE

    FILE *pFile = fopen("learn/write-files/output.txt", "w");

    char text[] = "Hello This is Wrote\nTo a new File !!!";

    if(pFile == NULL){ // if it cant open a file the fopen() function returns a NULL value (pointer to nothing (0))
        printf("Error: Opening File\n");
        return 1; // exit code
    }

    fprintf(pFile, "%s", text); // (file print format)

    printf("File was written to succesfully.\n");

    fclose(pFile);

    return 0;

}
