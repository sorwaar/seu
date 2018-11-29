#include <stdio.h>
int main()
{
    int ax, ay, bx,by,personX,personY;
    
    printf("Enter the value of A(x,y):\n ");
    
    scanf("%d %d", &ax, &ay);
    printf("Enter the value of B(x,y):\n ");
    
    
    scanf("%d %d", &bx, &by);
    printf("Enter the value of Person:\n ");
    
    
    scanf("%d %d", &personX, &personY);

    if( (personX>=ax && personY>=ay) && (personX<=bx && personY<=by) )
    {
        
        printf("Not Intruder");

    }
    else
    {
        printf("Intruder");
    }
    return 0;
}

