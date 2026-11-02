#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double dAns = 0.0;

    dAns = (fTemp-32)*(5/9);

    return dAns;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("km to m : %lf",dRet);

    return EXIT_SUCCESS;
}