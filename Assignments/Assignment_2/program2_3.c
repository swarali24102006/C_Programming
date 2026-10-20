#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////
//
// Function Name: Display
// Input        : Integer
// Output       : 
// Description  : Chehck Number is negative or positive
// Date         : 20/10/2026
// Author       : Swarali Laxman Gurav
//
//////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo<0)
    {
       printf("Hello");
    }
    else
    {
        printf("Demo");
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

    Display(iValue);

    return 0;

}