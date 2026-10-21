#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: CalculateBonus
// Input        : Float,Integer
// Output       : 
// Description  : Calculate Bonus based on completed years of service
// Date         : 22/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void CalculateBonus(float fSalary,int iYears)
{
    float fBouns = 0.0f;
    if(fSalary<0 || iYears<0)
    {
        printf("Invalid Input\n");
        return;
    }
    if(iYears>10)
    {
        fBouns = fBouns + fSalary *0.15;
    }
    else if((iYears>=5) && (iYears<=10))
    {
          fBouns = fBouns + fSalary *0.1;
    }
    else
    {
         fBouns = fBouns + fSalary *0.05;
    }
    printf("Bonus = %f",fBouns);
}

//////////////////////////////////////////////////////
// 
// Entry Point Of The Application
//
//////////////////////////////////////////////////////
int main()
{
    float fSalary = 0.0f;
    int iYears = 0;
   
    printf("Enter salary and years of service: ");
    scanf("%f %d",&fSalary,&iYears);

    CalculateBonus(fSalary,iYears);

    return EXIT_SUCCESS;
}