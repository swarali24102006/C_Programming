#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////
//
// Function Name: DisplayEvenFactors
// Input        : Integer
// Output       : 
// Description  : Print Even factors of Number
// Date         : 20/10/2026
// Author       : Swarali Laxman Gurav
//
//////////////////////////////////////////////////////
void DisplayEvenFactor(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo/2;iCnt++)
    {
        if(((iNo%iCnt)==0) && ((iCnt%2)==0)){
            printf("%d ",iCnt);
        }
    }
}


//////////////////////////////////////////////////////
// 
// Entry Point Of The Application
//
//////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return EXIT_SUCCESS;
}