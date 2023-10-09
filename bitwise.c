#include <stdio.h>

#include "bitwise.h"

int countSetBits(int n) 
{
    int count = 0, bit = 31;
    while (bit >= 0) 
    {
        if (n & (1 << bit))
        {
            count ++;   
        }
        bit --;
    }
    return count;
}

