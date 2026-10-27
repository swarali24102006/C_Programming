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
int main()
{
     int iValue1, iValue2, iResult; //uninitialized local variables

     printf("Enter First Number : \n");
     scanf("%d",&iValue1); //Never Write \n after %d in scanf (Logical Issue)

     printf("Enter Second Number : \n");
     scanf("%d",&iValue2); 

     iResult = iValue1 +iValue2; //Business Logic

     printf("%d\n",iResult);

    return 0;
}

//Varable Nameing Convention should be proper
//Take Input From User