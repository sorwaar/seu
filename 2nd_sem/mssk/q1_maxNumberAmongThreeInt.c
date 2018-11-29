#include <stdio.h>
int main()
{
    int numberOne, numberTwo, numberThree;
    
    printf("Enter three different numbers:\n ");
    //used for input number
    scanf("%d %d %d", &numberOne, &numberTwo, &numberThree);

    if( numberOne>=numberTwo && numberOne>=numberThree )
    {
        //used for print number one if it's maximum
        printf("The largest number:%d", numberOne);

    }else if( numberTwo>=numberOne && numberTwo>=numberThree )
    {
        //used for print number Two if it's maximum
        printf("The largest number:%d", numberTwo);
    }
    else if( numberThree>=numberOne && numberThree>=numberTwo )
    {
        //used for print number Three if it's maximum
        printf("The largest number:%d", numberThree);
    }
    else
    {
        printf("There is some equal number.");
    }
    return 0;
}

