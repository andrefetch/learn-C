# Read Files

Opening a file with `"r"` gives you a `FILE*` you can pull text out of, one line at a time.

```c
FILE *pFile = fopen("learn/read-files/input.txt", "r");
char buffer[1024] = {0};

if(pFile == NULL){
    printf("Could not open file.");
    return 1;
}

while(fgets(buffer, sizeof(buffer), pFile) != NULL){
    printf("%s", buffer);
}

fclose(pFile);
```

`"r"` opens the file for reading and returns `NULL` if it isn't there, so check before you read. `fgets` copies one line into `buffer`, stops at `sizeof(buffer) - 1` characters so it can't overflow, and returns `NULL` when there's nothing left, which is what ends the loop. The newline stays in the buffer, so `printf("%s", buffer)` is enough. `fclose` releases the handle, and the path is relative to wherever you run the program from.

### Code
- [main.c](main.c)
- [input.txt](input.txt)
