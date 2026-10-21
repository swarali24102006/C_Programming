#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: CheckDivisibility
// Input        : Integer
// Output       : 
// Description  : Check Number is divisible by 5 or not
// Date         : 21/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void CheckDivisibility(int iValue)
{
    if((iValue%5)==0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
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

    printf("Enter Number : ");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}