#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL checkEven(int iNo)
{
   if(iNo % 2 ==0)
   {
    return TRUE;
   }

    return FALSE;
}
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