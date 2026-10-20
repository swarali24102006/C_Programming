#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////
//
// Function Name: DisplayConvert
// Input        : Character
// Output       : 
// Description  : Convert Captital letter to small and small to capital
// Date         : 20/10/2026
// Author       : Swarali Laxman Gurav
//
//////////////////////////////////////////////////////
void DisplayConvert(char cValue)
{
    int t = cValue-'A';
    if(t>=0 && t<26)
    {
        printf("%c",cValue-'A'+'a');
    }
    else if(t>=32 && t<=57)
    {
         printf("%c",cValue-'a'+'A');
    }
    else{
        printf("Not Convertable\n");
    }
}

//////////////////////////////////////////////////////
// 
// Entry Point Of The Application
//
//////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}