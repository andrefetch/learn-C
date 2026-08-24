## Format Specifiers

### Basic Specifications 
%d -> decimal
%f -> float
%lf -> long float (for doubles)
%c -> single chars
%s -> multichars (aka strings)

### Width
%3d -> 3 characters needed (ex: int num = 1 printf(%3d, num) -> 003)

### Precision
%.2 -> allows 2 numbers after decimal point (19.192 -> 19.19)

### Flags
%+d -> adds a plus sign or negative if a negative is specified in the variable declaration

### All together
%7.2f\n -> 7 places over, 2 decimals after the first num, floating type

### Code
- [main.c](main.c)
