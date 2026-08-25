# Typedef

Reserved keyword that gives an existing datatype a "nickname", simplifies complex types and improves readability.

```c
typedef existing_type new_name;

typedef char String[50];
```

`String name = "Andre";` is really just `char name[50]`, so the size only lives in one spot. Capitalize the nickname so it stands out from the built in types.

### Code
- [main.c](main.c)
