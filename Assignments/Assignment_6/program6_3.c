#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: CalculateDiscount
// Input        : Float
// Output       : 
// Description  : Calculate total payable amount with discount
// Date         : 22/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;
    if(fAmount<0)
    {
        printf("Invalid Amount\n");
        return;
    }
    if(fAmount<1000)
    {
        fDiscount = fAmount * 0.0;
        fFinalAmount = fAmount - fDiscount;
    }
    else if((fAmount>=1000) && (fAmount<5000))
    {
        fDiscount = fAmount * 0.1;
        fFinalAmount = fAmount - fDiscount;
    }
    else
    {
        fDiscount = fAmount * 0.2;
        fFinalAmount = fAmount - fDiscount;
    }

    printf("Payable Amount = %f",fFinalAmount);
}

//////////////////////////////////////////////////////
// 
// Entry Point Of The Application
//
//////////////////////////////////////////////////////
int main()
{
    float fAmount = 0.0f;
   
    printf("Enter purchase amount: ");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}