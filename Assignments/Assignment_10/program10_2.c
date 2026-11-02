#include<stdio.h>
#include<stdlib.h>

double RectArea(float fRadius)
{
    double dArea = 0.0;

    dArea = PI*fRadius*fRadius;

    return dArea;
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is %lf",dRet);

    return EXIT_SUCCESS;
}