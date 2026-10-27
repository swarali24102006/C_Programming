#include<stdio.h>
#include<stdlib.h>
//Header
//////////////////////////////////////////////////////
//
// Function Name: Addition
// Input        : Integer,Integer 
// Output       : Integer
// Description  : Performs Addition 
// Date         : 04/10/2026
// Author       : Swarali Laxman Gurav
//
//////////////////////////////////////////////////////

int Addition(
                int iNo1, //First Input
                int iNo2  //SEcond Input
            )
{
  int iAns = 0;
  iAns = iNo1 + iNo2;  //Business Logic
  return iAns;
}

//////////////////////////////////////////////////////
// 
// Entry Point Of The Application
//
//////////////////////////////////////////////////////
int main()
{
     int iValue1 = 0, iValue2 = 0, iResult = 0;

     printf("Enter First Number : \n");
     scanf("%d",&iValue1); //Never Write \n after %d in scanf (Logical Issue)

     printf("Enter Second Number : \n");
     scanf("%d",&iValue2); 

     iResult = Addition(iValue1,iValue2); 

     printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS; //macro
    //#define EXIT_SUCCESS 0
    //#define EXIT_FailUre -1
}

//////////////////////////////////////////////////////
//  Step5 : Test The Program
//
//   Tested Test Cases
//----------------------------------------
//   Input1    Input2     Output
//----------------------------------------
//     10        11          21
//     11         0          11
//      0         11         11
//      20       -9          11
//      -9        20         11
//      -20       -11       -31
//----------------------------------------
//////////////////////////////////////////////////////


//If user gives wrong/invalid input we should handle it 


