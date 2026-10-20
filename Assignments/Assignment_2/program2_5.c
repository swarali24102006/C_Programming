#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////
//
// Function Name: checkEven
// Input        : Integer
// Output       : Integer
// Description  : Chehck Number is even or odd
// Date         : 20/10/2026
// Author       : Swarali Laxman Gurav
//
//////////////////////////////////////////////////////
BOOL checkEven(int iNo)
{
   if(iNo % 2 ==0)
   {
    return TRUE;
   }

    return FALSE;
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

    bRet = checkEven(iValue);
    
    if(bRet == TRUE)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }

    return 0;

}