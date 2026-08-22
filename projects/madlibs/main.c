#include <stdio.h>
#include <string.h>

int main() {

    // Mad Libs game

    char noun[50] = "";
    char verb[50] = "";
    char adjectiveOne[50] = "";
    char adjectiveTwo[50] = "";
    char adjectiveThree[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adjectiveOne, sizeof(adjectiveOne), stdin);
    adjectiveOne[strlen(adjectiveOne) - 1] = '\0';

    printf("Enter a noun (person, place, thing): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description) ");
    fgets(adjectiveTwo, sizeof(adjectiveTwo), stdin);
    adjectiveTwo[strlen(adjectiveTwo) - 1] = '\0';

    printf("Enter a verb (action | ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description) ");
    fgets(adjectiveThree, sizeof(adjectiveThree), stdin);
    adjectiveThree[strlen(adjectiveThree) - 1] = '\0';

    printf("\nToday I went to a %s zoo.\n", adjectiveOne);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adjectiveTwo, verb);
    printf("I was %s!\n", adjectiveThree);

    return 0;

}
