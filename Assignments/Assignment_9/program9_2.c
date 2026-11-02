#include<stdio.h>
#include<stdlib.h>

int DollerToINR(int iNo)
{
  int iAns = 0
  iAns = iNo*70;
  return iAns;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is : %d",iRet);
    return EXIT_SUCCESS;
}