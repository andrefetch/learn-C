# Quiz Game

### Description
A simple multiple choice quiz about the solar system. The program loops through each question, prints the four options, takes your letter answer, tells you if you got it right or wrong, and prints your final score at the end.

### What I've Learned
I practiced using arrays of strings to hold the questions and the options, and lining them up with a separate `char` array for the answer key so index `i` matches across all three. I also used `sizeof(questions) / sizeof(questions[0])` to count the questions instead of hardcoding the number, so adding a new one only means adding it to the arrays. For input I used `scanf(" %c", &guess)` with the leading space to skip the leftover newline, and `toupper()` from `ctype.h` so a lowercase answer still counts as correct.

### Code
- [main.c](main.c)
