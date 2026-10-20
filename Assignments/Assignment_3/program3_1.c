#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////
//
// Function Name: PrintEven
// Input        : Integer
// Output       : 
// Description  : print N even Numbers
// Date         : 20/10/2026
// Author       : Swarali Laxman Gurav
//
//////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    int iCnt = 0;
    for(iCnt = 2;iCnt<=iNo*2;iCnt += 2)
    {
        printf("%d ",iCnt);
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

    PrintEven(iValue);

    return EXIT_SUCCESS;
}