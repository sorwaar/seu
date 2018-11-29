#include <stdio.h>

int main() {
    int firstNum, secondNum;

    scanf("%d %d", &firstNum,&secondNum);


    if (firstNum > secondNum) {
        printf("This first Number number is greater. \n");
    } else if (secondNum > firstNum) {
        printf("This second Number number is greater.\n");
    } else if (firstNum == secondNum) {
        printf("This firstNum number and secondNum number is equal.\n");
    }

    return 0;

}