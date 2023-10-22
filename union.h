#ifndef UNION_H
#define UNION_H

union MyUnion
{
    int intValue;
    float floatValue;
    char charValue;
};
void displayUnion(union MyUnion u);
#endif             