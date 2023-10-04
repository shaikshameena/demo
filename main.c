#include "factorial.h"

#include<stdio.h>

int main( int argc, char* argv[])
{
    int number, result;
    if (argc != 2)
    {
        printf("Usage: %s <number>\n", argv[0]);
    }

    number = atoi(argv[1]);
    result = factorial (number);
    printf("factorial  of %d is=%d", number, result);

    return 0;
}