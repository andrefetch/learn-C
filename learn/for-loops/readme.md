# For Loops

Repeats a block a set number of times. All three parts live in the header, so the counter is easy to spot.

```c
// for(Initilization; Condition; Update)

for(int i = 10; i >= 0; i--){
    printf("%d\n", i);
}
```

The counter is declared inside the loop, so it only exists there. Counting up (`i++`) or down (`i--`) is just a matter of the condition and update.

Use a `for` loop when you know how many times you want to repeat, and a `while` loop when you only know the condition to stop on.

`sleep(1)` from `<unistd.h>` pauses for a second each pass, which turns the countdown into an actual countdown.
