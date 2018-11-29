#include <stdio.h>

int main() {

    double unit, extra = 0; temp = 0, temptotal = 0, bill = 0;
//input unit
    scanf("%lf", &unit);

        if (unit <= 50) {
            temp = unit*0.50;
            temptotal = temptotal + temp;
        } else {
            temp = 50*0.50;
            temptotal = temptotal + temp;
            unit = unit - 50;
        }

        if (unit <= 100) {
            temp = unit*0.75;
            temptotal = temptotal + temp;
        } else {
            temp = 100*0.75;
            temptotal = temptotal + temp;
            unit = unit - 100;
        }

        if (unit <= 100) {
            temp = unit*1.20;
            temptotal = temptotal + temp;
        } else {
            temp = 100*1.20;
            temptotal = temptotal + temp;
            unit = unit - 100;
            extra = 1;
        }

        if (extra == 1) {
            temp = unit*1.50;
            temptotal = temptotal + temp;
        }

        bill = (total*20)/100;

    printf("Total bill: %lf", bill);

    return 0;
}