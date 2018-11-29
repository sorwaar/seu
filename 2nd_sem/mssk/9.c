#include <stdio.h>

int main() {
    char character;

    scanf("%c", &character);

    if (character == ('a'||'A'||'e'||'E'||'i'||'I'||'o'||'O'||'u'||'U')) {
            printf("vowel.\n");
    } else {
            printf("Consonant.\n");
    }
    
    return 0;
}