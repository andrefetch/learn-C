#include <stdio.h>

typedef char String[50];
typedef char Initials[3];

int main() {

    // typedef = reserved keyword that gives an exisiting datatype a "nickname"
    // helps simplify complex types and improves code readibility

    // typedef existing_type new_name;

    int x = 3;
    int y = 4;
    int z = x + y;

    printf("%d", z);

    String name = "Andre";

    printf("%s", name);

    Initials user1 = "BC";
    Initials user2 = "BC";
    Initials user3 = "BC";
    Initials user4 = "BC";

    return 0;

}
