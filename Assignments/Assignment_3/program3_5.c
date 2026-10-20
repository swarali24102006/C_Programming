#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char cValue)
{
    if(cValue>='A' && cValue<='Z')
    {
        cValue=cValue-'A'+'a';
    }

    if(cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u')
    {
       return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter Character : \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel\n");
    }
    else
    {
         printf("It is not vowel\n");
    }
    return EXIT_SUCCESS;
}