#include "factorial.h"
#include<stdio.h>
int main(int argc,char*argv[])
{
    int x,r;
    if(argc!=2)
    {
        printf("Usage: %s <number>\n", argv[0]);
    }
    x=atoi(argv[1]);
    r=fact(x);
    printf("factv of %d is=%d",x,r);

    return 0;
}