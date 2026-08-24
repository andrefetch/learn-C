# Rock Paper Scissors

### Description
A simple rock paper scissors game played against the computer. You pick rock, paper, or scissors from a menu, the computer picks randomly with `rand()`, and the program prints both choices and tells you who won.

### What I've Learned
I practiced splitting the program into functions (`getUserChoice()`, `getComputerChoice()`, and `checkWinner()`) and declaring their function prototypes above `main()` so they can be defined further down the file. I used `switch` statements to turn the choice numbers into readable text, and a `do while` loop to keep asking for input until it's a valid option between 1 and 3. I also practiced control flow with an if/else if chain to decide the winner, and using `return` to send a value back from a function versus using `void` when there's nothing to return.

### Code
- [main.c](main.c)
