#include <stdio.h>
#include <stdbool.h>

int main() {

    // Variable = A reusable container for a value, behaves as if were the value it contains.

    // int whole num
    int age = 25;
    int year = 2026;
    int quantity = 2;

    // float (can hold up to 6-7 after initial digit)
    float gpa = 3.5;
    float price = 19.99;
    float temperature = -10.1;

    // double (holds past what a float value can) needed for high precision
    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    // char (like str in py) Single Quotes '' is how you define, double quoutes would be referencing to the pointer * "" STORES A SINGLE CHARACTER
    char grade = 'B';
    char symbol = '!';
    char currency = '$';

    // multi chars | we dont have strings in C so we have to use an array to allocate for a collection of single strings into a multi string
    // Stores as an array of chars
    char name[] = "Andre";
    char food[] = "pizza";
    char email[] = "fakemail@gmail.com";

    // boolean values
    bool isOnline = true; // Can also be 1 or 0 | 1 true, 0 false
    bool isStudent = true;

    // % is a formatter built in expression, %d means decimal (whole number output) to be replaced with the variable containing that type (int -> whole)
    printf("You are %d years old\n", age);
    printf("The year is is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

    // %f means floating, so values can contain a float and can contain decimal points like 0.1, etc (float -> float output)
    // Prints 6 digits after if you just use plain %f, ex: Your gpa is 3.500000
    printf("Your gpa is %f\n", gpa);
    printf("Your gpa is %.1f\n", gpa); // #.1f means how many values it will print after the first number, means 1 in this scenario.
    printf("The price is $%.2f\n", price);
    printf("The temperature outside is %.1f\n", temperature);

    // Double print
    printf("The value of pi is %.15lf\n", pi); // lf means long floating point number
    printf("The value of e is %.15lf\n", e);

    // Char prints
    // %c means Character formatter
    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);

    // Array of chars | Uses %s meaning str
    printf("Your name is %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your totally real email is %s\n", email);

    printf("%d\n", isOnline);

    return 0;

}
