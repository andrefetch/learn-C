# User Input

### Basics
Completely different than how python interpets input, its not just `name = input()`, it's abstracted a lot in python where in C we have a scan `scanf()` function that uses a
format specifier (for non-whitespace input) and takes the address of the variable in memory and attaches it to that point in memory.

### Multi-space input
We can use `fget` which means file get string it takes the variable name, the size of the variable, we can use `sizeof(var_name)` to approximate the size of the array. Lastly, it takes stdin as the file stream. It also produces a new line into the input buffer, results needing to use strlen(name) - 1 and assinging it to a null terminator to get rid of the "\n"

### Code
- [main.c](main.c)
