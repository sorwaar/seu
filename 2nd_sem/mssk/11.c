#include <stdio.h>

int main() {
    char character;

    scanf("%c", &character);

    if (character >= 'a' && character <= 'z') {
        printf("lowercase alphabet.\n");
    } else if (character >= 'A' && character <= 'Z') {
        printf("uppercase alphabet.\n");
    } else {
        printf("not alphabet.\n");
    }

    return 0;
}