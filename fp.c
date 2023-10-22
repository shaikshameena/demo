#include "fp.h"

int add(int number1, int number2) 
{
    return number1 + number2;
}

int subtract(int number1, int number2) 
{
    return number1 - number2;
}

int multiply(int number1, int number2) 
{
    return number1 * number2;
}

int divide(int number1, int number2) 
{
    if (number2 != 0) 
    {
        return number1 / number2;
    } 
    else 
    {
        return 0; // Handle division by zero
    }
}