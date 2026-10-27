#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 0;

    printf("Enter Number : \n");
    if(scanf("%d",&no)!=1)
    {
        printf("Invalid Input\n"); //0
        return EXIT_FAILURE; //-1
    }
    printf("Input is valid\n"); //1
    return EXIT_SUCCESS; //0
}