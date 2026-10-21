#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: CalculateElectricityBill
// Input        : Integer
// Output       : 
// Description  : calculate Electricity Bill based on unit consumed
// Date         : 22/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void CalculateElectricityBill(int iUnits)
{
    float fBill =0.0f;
    if(iUnits<0)
    {
        printf("Invalid Units Consumption\n");
        return;
    }
    int iCnt = 0;
    for(iCnt = 5;iCnt<=7;iCnt+=2)
    {
        if(iUnits>=100)
        {
            fBill = fBill + 100 * iCnt;
            iUnits-=100;
        }
        else
        {
           fBill = fBill + iUnits * iCnt;
           iUnits = 0;
           
        }
    }
    if(iUnits>0)
    {
         fBill = fBill + iUnits * 10; 
    }

    printf("Bill = %f",fBill);
}

//////////////////////////////////////////////////////
// 
// Entry Point Of The Application
//
//////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter consumed units : ");
    scanf("%d",&iValue);

    CalculateElectricityBill(iValue);

    return EXIT_SUCCESS;
}