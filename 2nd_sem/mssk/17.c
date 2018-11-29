#include <stdio.h>

int main() {
    int first, second, third, temp, tempPlus, tempMinus;

    scanf("%d %d %d", &first,&second,&third);

    temp = (second*second) - (4*first*third);
    tempPlus  = -second + temp;
    tempMinus = -second - temp;

    printf("1st Root is: %d\n", tempPlus/(2*first));
    printf("2nd Root is: %d\n", tempMinus/(2*first));

    return 0;
}