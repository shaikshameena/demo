#include <stdio.h>

#include <string.h>

#include "bitwise.h"
#include "struct.h"
#include "fp.h"
#include "union.h"

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s <function> [arguments]\n", argv[0]);
        printf("Available functions:\n");
        printf("1. bitwise <number>\n");
        printf("2. structure <variable1> <variable2>\n");
        printf("3. functionpointer <num1> <num2> <operator>\n");
        printf("4. union <type> <value>\n");
        return 1;
   
    }
    const char* function = argv[1];
    if(strcmp(function, "bitwise") == 0 && argv[2])
    {
        int number;
        int setbits;
        number = atoi(argv[2]);
        setbits = countSetBits(number);
        printf("result = %d", setbits)
    }
    else if (strcmp(function, "structure") == 0 && argc == 4) 
    {
        // Structure function
        int variable1 = atoi(argv[2]);
        int variable2 = atoi(argv[3]);
        struct Point mypoint;
        mypoint.variable1 = variable1;
        mypoint.variable2 = variable2;
        printPoint(mypoint);
    }
    else if (strcmp(function, "functionpointer") == 0 && argc == 5) 
    {
        // Function Pointer function
        int num1 = atoi(argv[2]);
        int num2 = atoi(argv[3]);
        char operator = argv[4][0];
        int (*operation)(int, int);
        if (operator == '+') 
        {
        operation = add;
        }
     else if (operator == '-') 
     {
        operation = subtract;
     } 
     else if (operator == '*') 
     {
        operation = multiply;
     }
     else if (operator == '/') 
     {
        operation = divide;
    } 
    else 
    {
        printf("Invalid operator: %c\n", operator);
        return 1;
    }
int result = operation(num1, num2);
    printf("Result: %d\n", result);
}
  else if (strcmp(function, "union") == 0 && argc == 4) 
  {
     // Union function
    union MyUnion myUnion; 
    const char* type = argv[2];
    const char* value = argv[3];

    if (strcmp(type, "int") == 0) 
    {
        myUnion.intValue = atoi(value); 
    }
    else if (strcmp(type, "float") == 0) 
    {
        myUnion.floatValue = atof(value);
    }
    else if (strcmp(type, "char") == 0) 
    {
        
        myUnion.charValue = value[0]; 
    }
    else 
    {
        printf("Invalid union type: %s\n", type);
        return 1;
    }

  displayUnion(myUnion);  
  }
  else 
    {
        printf("Invalid function or arguments. See usage.\n");
        return 1;
    }

    return 0;

}
