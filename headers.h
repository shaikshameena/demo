#include "bitwise.h"

#include "struct.h"

#include "union.h"

#include "functionpointer.h"

int countSetBits(int n);

struct Point 
{
    int variable1;
    int variable2;
};

void printPoint(struct Point pt);

union MyUnion 
{
    int intValue;
    float floatValue;
    char charValue;
};

void displayUnion(union MyUnion u);
typedef int (*Operation)(int, int);
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

