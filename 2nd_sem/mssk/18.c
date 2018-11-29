#include <stdio.h>

int main() {
    int mainPrice, sellPrice;

   //first input main price then sell price
    scanf("%d %d", &mainPrice, &sellPrice);

    if (mainPrice > sellPrice) {
        printf("Loss\n");
    } else if (mainPrice < sellPrice) {
        printf("Profit\n");
    } else {
        printf("No profit & no loss :) .\n");
    }

    return 0;
}