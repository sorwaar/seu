#include <stdio.h>

int main() {
    char character;

    scanf("%c", &character);

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        printf("Alphabet.\n");
    } else {
        printf("Not alphabet.\n");
    }

    return 0;
}