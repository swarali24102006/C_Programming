#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: CheckMultipleDivisibility
// Input        : Integer
// Output       : 
// Description  : Check Number is divisible by 3 and 5
// Date         : 22/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void CheckMultipleDivisibility(int iValue)
{
    if(((iValue%5)==0) && ((iValue%3)==0))
    {
        printf("Divisible by Both\n");
    }
    else if((iValue%5)==0)
    {
        printf("Divisible by 5 Only\n");
    }
    else if((iValue%3)==0)
    {
        printf("Divisible by 3 Only\n");
    }
    else
    {
        printf("Not Divisible by Either\n");
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

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}