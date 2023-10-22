#include <stdio.h>

#include "bitwise.h"

int countSetBits(int number) 
{
    int count = 0;
    int bit = 31;
    while (bit >= 0) 
    {
        if (number & (1 << bit))
        {
            count ++;   
        }
        bit --;
    }
    return count;
}

