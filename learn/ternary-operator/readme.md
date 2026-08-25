# Ternary Operator

Shorthand for an if else statement, it's an expression so it gives back a value instead of just running a block.

```c
int max = (x > y) ? x : y;
// (condition) ? value_if_true : value_if_false
```

Best part is you can drop it straight into a `printf` since it resolves to a value, so stuff like even/odd, online/offline, or AM/PM is one line instead of four.

### Code
- [main.c](main.c)
