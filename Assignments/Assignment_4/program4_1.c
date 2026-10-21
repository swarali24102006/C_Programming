#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: CheckNumber
// Input        : Integer
// Output       : 
// Description  : Check Number is Positive ,Negative or Zero
// Date         : 20/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void CheckNumber(int iValue)
{
    if(iValue>0)
    {
        printf("Positive Number\n");
    }
    else if(iValue<0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero\n");
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

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}