#include <stdio.h>

int main() {

    // Weight Converter Program

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");

    scanf("%d", &choice);

    if(choice == 1){

        // kilograms -> pounds
        printf("Enter the weight in kilograms: ");

        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is to %.2f pounds\n", kilograms, pounds);

    }
    else if(choice == 2) {

       // pounds -> kilograms
       printf("Enter the weight in pounds: ");

       scanf("%f", &pounds);
       kilograms = pounds / 2.20462;
       printf("%.2f pounds is to %.2f kilograms\n", pounds, kilograms);

    }
    else {
        printf("Your choice of %d is invalid: \n", choice);
    }

    return 0;

}
