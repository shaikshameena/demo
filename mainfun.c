#include <stdio.h>

#include "bitwise.h"

#include "struct.h"

#include "functionpointer.h"

#include "union.h"

int main()
{
/* biwise function */
    int num;
    printf("enter the number");
    scanf("%d", &num);
    int setbits = countSetBits(num);
    printf("number of setbits  %d in %d", setbits, num);

/* structure function */
 struct point mypoint;
 mypoint.variable1 = 10;
 mypoint.variable2 = 20;
 printpoint(mypoint);
 
/* functionpointer function*/
operation operation;
int num1, num2;
printf("enter the num1 and num2");
scanf("%d%d", &num1, &num2);
operation = add;
printf("addition result %d", operation(num1, num2));
operation = subtract;
printf("subraction result %d", operation(num1, num2));
operation = multiply;
printf("multiplication result %d", operation(num1, num2));
operation = divide;
printf("division result %d", operation(num1, num2));

/*union function*/
union MyUnion un;
un.intValue = 12;
printf("values in union:\n")
displayUnion(un);
un.floatValue = 18.9;
printf("values in union after changing active member:\n");
displayUnion(un);
un.charValue = 'a';
printf("values in union after changing active member:\n");
displayUnion(un);

return 0;
}
