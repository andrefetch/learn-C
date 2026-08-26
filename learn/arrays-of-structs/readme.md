# Arrays of Structs

An array where every element is a struct, so related data stays grouped instead of being split across one array per field.

```c
Car cars[] = {
    {"Mustang", 2026, 32000},
    {"Corvette", 2021, 68000},
    {"Challenger", 2024, 29000}
};
```

Each row is a whole `Car`, so you index to the struct then dot to the member: `cars[i].model`. Length comes from the usual `sizeof(cars) / sizeof(cars[0])`, which here is one struct's size rather than a single datatype.

### Code
- [main.c](main.c)
