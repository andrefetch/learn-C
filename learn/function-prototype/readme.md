# Function Prototypes

Declaring a function before `main` so the compiler knows the name, return type, and params before it ever sees the actual definition. That way you can define your functions below `main` instead of above it.

```c
void hello(char name[], int age); // prototype, ends with a ;
```

Considered good practice to always write them, keeps `main` at the top where it's easy to find and stops the compiler complaining about implicit declarations.
