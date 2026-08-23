#include <stdio.h>

int main() {

    // temp conversion program

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F): ");
    scanf("%c", &choice);

    if(choice == 'C') {
        // C to F
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32; // c to f conversion
        printf("%.1f Celsuius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);

    }
    else if (choice == 'F') {
        // F to C
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9; // f to c conversion
        printf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheit, celsius);
    }
    else {
        printf("Your choice of %c is not valid. Use either F or C\n", choice);
    }

    return 0;

}
