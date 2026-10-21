#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: DisplayGrade
// Input        : Float
// Output       : 
// Description  : Calculate grade based on marks out of 100
// Date         : 22/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void DisplayGrade(float fMarks)
{
    if((fMarks>=90) && (fMarks<=100))
    {
        printf("Grade A\n");
    }
    else if((fMarks>=75) && (fMarks<=89))
    {
        printf("Grade B\n");
    }
    else if((fMarks>=60) && (fMarks<=74))
    {
        printf("Grade C\n");
    }
    else if((fMarks>=40) && (fMarks<=59))
    {
        printf("Grade D\n");
    }
    else if(fMarks<40)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid Marks\n");
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

    printf("Enter Marks : ");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}