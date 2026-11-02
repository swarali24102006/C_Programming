#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iAns = 0;
    iAns = iNo*1000;
    return iAns;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("km to m : %d",iRet);

    return EXIT_SUCCESS;
}