#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////
//
// Function Name: Display
// Input        : 
// Output       : 
// Description  : print 5 to 1
// Date         : 19/10/2026
// Author       : Swarali Laxman Gurav
//
//////////////////////////////////////////////////////
void Display()
{
    int i =0;
    i = 5;
    while(i>=1)
    {
        printf("%d",i);
        i--;
    }
}

//////////////////////////////////////////////////////
// 
// Entry Point Of The Application
//
//////////////////////////////////////////////////////
int main()
{
    Display();
    return EXIT_SUCCESS;
}