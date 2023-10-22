#include <stdio.h>

#include "union.h"

void displayUnion(union MyUnion u) 
{
    printf("integer Value: %d\n", u.intValue);
    printf("Float Value: %.2f\n", u.floatValue);
    printf("Character Value: %c\n", u.charValue);
}