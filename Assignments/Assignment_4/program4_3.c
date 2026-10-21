#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: FindGreater
// Input        : Integer,Integer
// Output       : 
// Description  : Find greater of two numbers
// Date         : 21/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void FindGreater(int iFirst,int iSecond)
{
    if(iFirst>iSecond)
    {
        printf("%d\n",iFirst);
    }
    else if(iFirst<iSecond)
    {
        printf("%d\n",iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal");
    }
}

//////////////////////////////////////////////////////
// 
// Entry Point Of The Application
//
//////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two Numbers : ");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}