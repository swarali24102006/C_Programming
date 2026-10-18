#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0 //default value of bool is false

//////////////////////////////////////////////////////
//
// Function Name: Check
// Input        : Integer
// Output       : Integer
// Description  : Check the number is divisible by 5 or not 
// Date         : 19/10/2026
// Author       : Swarali Laxman Gurav
//
//////////////////////////////////////////////////////
int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return EXIT_SUCCESS;
}