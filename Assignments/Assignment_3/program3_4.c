#include<stdio.h>
#include<stdlib.h>

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
int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}