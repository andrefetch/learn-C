# calloc

`calloc()` = contiguous allocation. Same idea as `malloc()`, but it takes the count and the size separately and zeroes every byte it hands back.

```c
#include <stdlib.h> // need this header for calloc

int *scores = calloc(number, sizeof(int)); // calloc(#, size)

if(scores == NULL){
    printf("Allocation Error");
    return 1;
}

free(scores);
scores = NULL; // removes dangling pointer
```

`calloc(number, sizeof(int))` asks for `number` slots of `int`, so the arguments read like an array instead of one byte total. It returns `NULL` when the request can't be filled, so check before touching the pointer. Everything after that is the same as `malloc`: the block is yours until you `free` it, and the pointer still holds the dead address afterwards, so `NULL` it out.

### Why use it

- **It starts at zero** - no reading leftover garbage if you use a slot before writing to it, which `malloc` would let you do.
- **Fewer bugs** - `malloc` is faster, but zeroed memory means a counter or accumulator is already at a sane starting value.
- **The size reads better** - `calloc(number, sizeof(int))` says "number of ints" instead of doing the multiplication yourself.

### Code
- [main.c](main.c)
