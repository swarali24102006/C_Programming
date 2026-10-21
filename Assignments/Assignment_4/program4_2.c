#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: ChechEvenOdd
// Input        : Integer
// Output       : 
// Description  : Check Number is Even or Odd
// Date         : 21/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void ChechEvenOdd(int iValue)
{
    if((iValue%2 )==0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
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

    printf("Enter a Number : ");
    scanf("%d",&iValue);

    ChechEvenOdd(iValue);

    return EXIT_SUCCESS;
}