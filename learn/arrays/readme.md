# Arrays

Holds many values of the same type, laid out back to back in memory. Index from `0`, and leaving the brackets empty lets the compiler count the initialiser for you.

```c
int numbers[] = {10, 20, 30, 40, 50, 60, 70};

printf("%d\n", numbers[4]);
```

An array doesn't remember its own length, so to iterate it you divide the size of the whole array by the size of one element to get the count.

```c
for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
    printf("%d\n", numbers[i]);
}
```

That only works in the scope the array was declared in. Pass it to a function and it decays into a pointer, so `sizeof` measures the pointer instead and you have to pass the length yourself.

### Code
- [main.c](main.c)
