# malloc

`malloc()` asks the operating system for memory while the program is running, and hands back a pointer to it.

```c
#include <stdlib.h> // need this header for malloc

char *grades = malloc(number * sizeof(char));

if(grades == NULL){
    printf("Memory allocation failed.");
    return 1;
}

free(grades);  // returning the "rented" space back to the operating system
grades = NULL; // avoids dangling pointers
```

You give `malloc` a number of bytes, so the size is written as `number * sizeof(char)` and still works if the type changes. It returns `NULL` if the request can't be filled, so check before touching the pointer. The memory is uninitialized and stays yours until you `free` it, and forgetting that is a memory leak. After `free` the pointer still holds the dead address, so `NULL` it out.

### Why use it

- **Size isn't known until runtime** - `char grades[number]` needs a size the compiler can see; here `number` comes from the user.
- **It outlives the function** - local arrays die on return, a `malloc`'d block doesn't, so a function can hand data back.
- **The stack is small** - big allocations overflow it, the heap is much larger.

### Code
- [main.c](main.c)
