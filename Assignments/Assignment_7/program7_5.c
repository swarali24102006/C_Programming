#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=5;iCnt++)
    { 
        printf("%d\t",iCnt*iNo);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scnaf("%d",&iValue);

    MultipleDisplay(iValue);
    return EXIT_SUCCESS;
}