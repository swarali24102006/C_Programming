#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////
//
// Function Name: Display
// Input        : Integer,Integer
// Output       : 
// Description  : print Number N times
// Date         : 20/10/2026
// Author       : Swarali Laxman Gurav
//
//////////////////////////////////////////////////////
void Display(int iNo, int Frequency)
{
   int iCnt = 0;

   if(Frequency<0)
   {
    Frequency=-Frequency;
   }

   for(iCnt = 1;iCnt<=Frequency;iCnt++)
    {
        printf("%d ",iNo);
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
    int iCount = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;

}