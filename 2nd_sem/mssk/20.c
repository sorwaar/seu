#include <stdio.h>

int main() {
    int basic, hra, da, total;

//basic salary input
    scanf("%d", &basic);

    if (basic <= 10000) {
        hra = (basic*20)/100;
        da = (basic*80)/100;
    } else if (basic <= 20000) {
        hra = (basic*25)/100;
        da = (basic*90)/100;
    } else {
        hra = (basic*30)/100;
        da = (basic*95)/100;
    }
    total = basic + hra + da;

    printf("Total salary: %d ", total);

    return 0;
}