#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo/2;iCnt++)
    {
        if(((iNo%iCnt)==0) && ((iCnt%2)==0)){
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}