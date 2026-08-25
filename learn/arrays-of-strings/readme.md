# Arrays of Strings

A 2D array of `char` where each row is a string, so the longest one decides the fixed row width.

```c
char fruits[][10] = {"Apple", "Banana", "Coconut", "Pineapple", "Lemon"};
```

Same byte math as 2D arrays for the loop: 50 bytes total / 10 bytes a row = 5. One bracket gives a whole string, two gives a character.

For the exercise I used `fgets` with `sizeof(names[i])` as the limit, then trimmed the newline it leaves behind.

### Code
- [main.c](main.c)
- [excerize.c](excerize.c)
