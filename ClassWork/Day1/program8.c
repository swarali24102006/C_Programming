/*
    Step1 : Understand the problem statement
    Step2 : Write The Algorithm
    Step3 : Decide the Programming Language
    Step4 : Write The Program
    Step5 : Test The Program
*/

//////////////////////////////////////////////////////
//
//   Step1 : Understand the problem statement
//            User is going to enter any two integers
//            And we have to perform addition
////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
//   Step2 : Write The Algorithm
/*
      START
        Accept 1st number as No1
        Accept 2nd number as No2
        Create the variable as Ans to store the result
        Perform the Addition and store into Ans
        Display the result from Ans
      END  
*/
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//  Step3 : Decide the Programming Language
//          We select C Programming
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//   Step4 : Write The Program
//////////////////////////////////////////////////////


#include<stdio.h>
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

int Addition(int iNo1,int iNo2)
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

    return 0;
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

























//Varable Nameing Convention should be proper
//Take Input From User
//Improve Output Display
//Initialize variables with default value
//Business Logic Should Be Reusable



