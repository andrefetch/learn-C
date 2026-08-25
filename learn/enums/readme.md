# Enums

A user defined data type made of a set of named integer constants, counting from 0 unless you set the values yourself.

```c
enum Day{ SUNDAY, MONDAY, TUESDAY };
enum Day today = TUESDAY;
```

Typedef them to skip the `enum` keyword every time you declare one.

```c
typedef enum { AM, PM }Time;
Time newTime = AM;
```

### Code
- [main.c](main.c)
- [enumprac.c](enumprac.c)
