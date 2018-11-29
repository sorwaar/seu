#include <stdio.h>

int main() {
    int first, second, third;

    scanf("%d %d %d", &first,&second,&third);

    if ((first + second > third) || (first + third > second) || (second + third > first) {
        printf("Triangle is valid.\n");
    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}