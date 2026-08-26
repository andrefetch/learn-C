# Pointers

A variable that stores the memory address of another variable, so you can hand a function the address of something instead of copying the whole thing.

```c
int age = 25;
int* pAge = &age;

birthday(pAge);

void birthday(int* age) {
    (*age)++;
}
```

`&` gets the address, `*` in a declaration marks the variable as a pointer, and `*` on an existing pointer is the dereference operator that reaches the value it points at. Passing by value only hands the function a copy, so `birthday` takes `int*` and does `(*age)++` to change the original. Addresses print with `%p`.

### Code
- [main.c](main.c)
