#include <stdio.h>

typedef struct {
  char model[25];
  int year;
  int price;
}Car;

int main() {

    // arrays of structs -> array where each element contains a struct {} helps organize and groups together related data

    Car cars[] = {
        {"Mustang", 2026, 32000},
        {"Corvette", 2021, 68000},
        {"Challenger", 2024, 29000}
    };

    int numbers = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < numbers; i++){
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;

}
