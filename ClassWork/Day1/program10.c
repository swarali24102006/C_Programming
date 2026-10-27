#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ret = 0;
    int no = 0;

    printf("Enter Number : \n");
    ret  = scanf("%d",&no);

    printf("Return Value is : %d\n",ret);


    return EXIT_SUCCESS;
}
//return value of printf is number of characters we print 
