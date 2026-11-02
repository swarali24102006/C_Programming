#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0,iMul=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    iMul = 1;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        iMul = iMul*iCnt;
    }
    retrun iMul;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter Number : ");
    scnaf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is %d",iRet);
    return EXIT_SUCCESS;
}