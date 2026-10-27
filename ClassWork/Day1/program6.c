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

int Addition(int iNo1,int iNo2) //helper function
{
  int iAns = 0;
  iAns = iNo1 + iNo2;  //Business Logic
  return iAns;
}

#include<stdio.h>
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

//Varable Nameing Convention should be proper
//Take Input From User
//Improve Output Display
//Initialize variables with default value //auto
//Business Logic Should Be Reusable

//printing should not be in helper function


// function c c++
// method  java
// api python
// process assembly