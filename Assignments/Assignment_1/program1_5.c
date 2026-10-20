#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////
//
// Function Name: Accept
// Input        : Integer
// Output       : 
// Description  : Print 5 time *
// Date         : 19/10/2026
// Author       : Swarali Laxman Gurav
//
//////////////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=5;iCnt++)
    {
        printf("*");
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
    iValue = 5;

    Accept(iValue);

    return EXIT_SUCCESS;
}