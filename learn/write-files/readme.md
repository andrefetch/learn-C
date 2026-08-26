# Write Files

Opening a file with `fopen` gives you a `FILE*` you can print into, so output goes to disk instead of the terminal.

```c
FILE *pFile = fopen("learn/write-files/output.txt", "w");

if(pFile == NULL){
    printf("Error: Opening File\n");
    return 1;
}

fprintf(pFile, "%s", text);
fclose(pFile);
```

`"w"` creates the file if it isn't there and wipes it if it is. `fopen` returns `NULL` when it can't open the file, so check for that before writing or you'll be dereferencing nothing. `fprintf` is just `printf` with a file as the first argument, and `fclose` flushes the buffer and releases the handle. The path is relative to wherever you run the program from, not to the source file.

### Code
- [main.c](main.c)
- [output.txt](output.txt)
