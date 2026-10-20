#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////
//
// Function Name: DisplayFactor
// Input        : Integer
// Output       : 
// Description  : Print Factors of Number
// Date         : 20/10/2026
// Author       : Swarali Laxman Gurav
//
//////////////////////////////////////////////////////
void DisplayFactor(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo%iCnt)==0){
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

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}