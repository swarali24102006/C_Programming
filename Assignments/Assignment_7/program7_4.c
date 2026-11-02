#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo;iCnt<=iNo;iCnt++)
    {
      if(iCnt%2==1)
       { 
        printf("%d\t",iCnt);
       }
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scnaf("%d",&iValue);

    OddDisplay(iValue);
    return EXIT_SUCCESS;
}