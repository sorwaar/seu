#include <stdio.h>

int main() {
    double purchage, discount = 0;
    //input purchage amount
    scanf("%lf", &purchage);

    if (purchage >= 500) {
        discount = (purchage*5)/100;
    } else if (purchage >= 501 && purchage <= 1000) {
        discount = (purchage*10)/100;
    } else if (purchage >= 1001 && purchage <= 2000) {
        discount = (purchage*15)/100;
    } else if (purchage >= 2001) {
        discount = (purchage*20)/100;
    }
    printf("Total Discount = %lf", discount);

    return 0;
}