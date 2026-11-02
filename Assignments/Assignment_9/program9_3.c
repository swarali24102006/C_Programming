#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
  int iCnt = 0,iMul = 0;

  if(iNo<0)
  {
    iNo = -iNo;
  }
  
  for(iCnt = 1,iMul = 1;iCnt<=iNo;iCnt++)
  {
    if(iCnt%2 == 0)
    {
      iMul = iMul * iCnt;
    }
  }

  return iMul;

}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of Number is : %d",iRet);
    return EXIT_SUCCESS;
}