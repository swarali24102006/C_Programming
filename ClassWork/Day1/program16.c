#include "Header.h"

#include<assert.h> //use for unit testing

int main()
{
    assert(Addition(10,11) == 21); //test engin run krnar function 

    assert(Addition(-10,20) == 10);

    assert(Addition(-10,-20) == -30);

    return EXIT_SUCCESS;
}