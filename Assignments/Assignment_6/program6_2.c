#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: CheckAdmission
// Input        : Float,Integer
// Output       : 
// Description  : Check studet is eligible for admission or not based on age and marks
// Date         : 22/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void CheckAdmission(float fMarks,int iAge)
{
    if((fMarks>100 || fMarks<0) || iAge<0)
    {
        printf("Invalid Input\n");
        return;
    }
    if(fMarks>=60 && iAge>=17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }

}

//////////////////////////////////////////////////////
// 
// Entry Point Of The Application
//
//////////////////////////////////////////////////////
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d",&fMarks,&iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}