#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: CheckCharacterType
// Input        : Character
// Output       : 
// Description  : Check Character Type
// Date         : 22/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void CheckCharacterType(char cValue)
{
    if((cValue>='A') && (cValue<='Z'))
    {
        printf("Uppercase Alphabet\n");
    }
    else if((cValue>='a') && (cValue<='z'))
    {
        printf("Lowercase Alphabet\n");
    }
    else if((cValue>='0') && (cValue<='9'))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

//////////////////////////////////////////////////////
// 
// Entry Point Of The Application
//
//////////////////////////////////////////////////////
int main()
{
    char cValue ='\0';

    printf("Enter a Character : ");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}