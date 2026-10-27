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
//   Step2 : Write The Algorithm //lang independent set of instructions is algorithm
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
     int i = 10, j = 11, k = 0;
     k = i + j; //Business Logic

     printf("%d\n",k);

    return 0;
}