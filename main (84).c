#include <stdio.h>
#include<stdlib.h>
int* f()
{
    int a =9;
    return &a;
    
}

void main()
{
    int* ptr =f();
    printf ("%d",*ptr);
}
   /* here it is returning the address of a local variable so it is a dangling pointer and we cannot acccesss it */