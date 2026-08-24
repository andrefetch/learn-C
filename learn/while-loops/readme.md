# While Loops

Repeats a block while a condition is true. Checked *before* each run, so if it's false from the start the body never runs.

```c
while(strlen(name) == 0) {
    printf("Name cannot be empty, try again: ");
    fgets(name, sizeof(name), stdin);
}
```

`do while` checks *after*, so it always runs at least once. Handy when you need the input before you can test it. Ends with a `;`.

```c
do {
    printf("Enter a number greater than 0: ");
    scanf("%d", &number);
} while(number <= 0);
```

Something in the body has to eventually make the condition false, otherwise it loops forever.
