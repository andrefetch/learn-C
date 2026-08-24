# Nested Loops

A loop inside a loop. The outer loop runs once, the inner loop runs all the way through, then the outer loop moves on.

```c
for(int i = 0; i < rows; i++) {
    for(int j = 0; j < columns; j++) {
        printf("%c", symbol);
    }
    printf("\n");
}
```

Each loop needs its own counter (`i` and `j`), otherwise the inner loop updates the outer one and the whole thing breaks.

Handy for anything grid shaped, rows and columns, times tables, patterns. The outer loop is the row, the inner loop is what goes in it, and the `printf("\n")` after the inner loop is what drops to the next line.

### Code
- [main.c](main.c)
