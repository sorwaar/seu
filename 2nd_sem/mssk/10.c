#include <stdio.h>

int main() {
    int character;

    scanf("%d", &character);

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        printf("Alphabet.\n");
    } else if (character >= 0 && character <= 9) {
        printf("Number.\n");
    } else {
        printf("Special character exist.\n");
    }

    return 0;
}