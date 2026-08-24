# Random Numbers

`rand()` from `stdlib.h` gives a pseudo-random number, meaning it only *looks* random, it's a maths formula running off a seed. `srand()` sets that seed, and seeding with the time means it changes every run.

```c
srand(time(NULL));

int randomNum = (rand() % (max - min + 1)) + min;
```

`% (max - min + 1)` gets a number the size of the range, `+ min` shifts it to start at your minimum.

Only call `srand()` once at the start, reseeding before every `rand()` gives you the same number over and over.
