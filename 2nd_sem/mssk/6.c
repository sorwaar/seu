#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n % 5 == 0 && n % 11 == 0) {
        printf("Divisible\n");
    } else if (n % 5 == 0 && n % 11 != 0) {
        printf("Divisible by only 5.\n");
    } else if (n % 5 != 0 && n % 11 == 0) {
        printf("Divisible by only 11.\n");
    } else {
       printf("Not Divisible\n");
    }

    return 0;
}