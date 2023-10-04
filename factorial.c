#include "factorial.h"

int factorial (int number)
{
    if (number == 0)
    {
         return 0;
    }

  else
  {
       return number * fact(number - 1);
  }
  
}