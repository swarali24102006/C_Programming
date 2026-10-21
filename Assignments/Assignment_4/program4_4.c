#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////
//
// Function Name: CheckVotingEligibility
// Input        : Integer
// Output       : 
// Description  : Check Voting Eligibility
// Date         : 21/10/2026
// Author       : Swarali Laxman Gurav
//
/////////////////////////////////////////////////////
void CheckVotingEligibility(int iAge)
{
    if(iAge<0)
    {
        printf("Invalid Age\n");
        return;
    }
    if(iAge>=18)
    {
        printf("Eligible For Voting");
    }
    else
    {
        printf("Not Eligible for Voting");
    }
}

//////////////////////////////////////////////////////
// 
// Entry Point Of The Application
//
//////////////////////////////////////////////////////
int main()
{
    int iAge = 0;

    printf("Enter your Age : ");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}