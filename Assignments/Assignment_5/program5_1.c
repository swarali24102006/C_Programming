#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: FindGreatest
// Input        : Integer,Integer,Integer
// Output       : 
// Description  : Find Greatest of 3 numbers
// Date         : 22/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void FindGreatest(int iFirst,int iSecond ,int iThird)
{
    if((iFirst>iSecond) && (iFirst>iThird))
    {
        printf("%d is Greatest\n",iFirst);
    }
    else if(iSecond>iThird)
    {
        printf("%d is Greatest\n",iSecond);
    }
    else
    {
        printf("%d is Greatest\n",iThird);
    }
}

//////////////////////////////////////////////////////
// 
// Entry Point Of The Application
//
//////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}