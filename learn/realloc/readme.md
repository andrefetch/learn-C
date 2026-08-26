# realloc

`realloc()` = reallocation. Takes a block you already allocated and resizes it, keeping whatever was in it.

```c
#include <stdlib.h> // need this header for realloc

float *prices = malloc(number * sizeof(float));

float *temp = realloc(prices, newNumber * sizeof(float)); // realloc also frees the old memory

if(temp == NULL){
    printf("Reallocation failed");
}
else{
    prices = temp; // only overwrite the old pointer once you know it worked
}

free(prices);
prices = NULL; // removes dangling pointer
```

Catch the result in a `temp` pointer first. `realloc` may move the block somewhere else and free the old address, so if you assign straight to `prices` and it returns `NULL`, you lose the only pointer to the memory and leak it. The old contents carry over, but any new slots past the old size are uninitialized like `malloc`, so fill them before reading. Growing or shrinking, you still `free` it once at the end.

### Why use it

- **The size changes after you've allocated** - the user wants more prices than they first asked for, and the data already entered stays put.
- **No copying by hand** - the alternative is a second `malloc`, a manual copy, then a `free`; `realloc` does all three.
- **Shrinking gives memory back** - asking for less hands the leftover space back instead of sitting on it.

### Code
- [main.c](main.c)
