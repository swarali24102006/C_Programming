#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 0;

    printf("Enter Number : \n");
    if(scanf("%d",&no)!=1)
    {
        fprintf(stderr,"Invalid Input\n"); //Standard error device
        return EXIT_FAILURE; //-1
    }
    printf("Input is valid\n");
    return EXIT_SUCCESS; //0
}