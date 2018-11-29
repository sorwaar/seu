#include <stdio.h>

int main() {
    int weekNum;

    scanf("%d", &weekNum);

    if (weekNum == 1) {
        printf("Sunday\n");
    } else if (weekNum == 2) {
        printf("Monday\n");
    } else if (weekNum == 3) {
        printf("Tuesday\n");
    } else if (weekNum == 4) {
        printf("Wednesday\n");
    } else if (weekNum == 5) {
        printf("Thursday\n");
    } else if (weekNum == 6) {
        printf("Friday\n");
    } else if (weekNum == 7) {
        printf("Saturday\n");
    } else {
        printf("Invalid Week Number.\n");
    }

    return 0;
}