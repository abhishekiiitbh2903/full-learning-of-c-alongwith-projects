#include <stdio.h>
#include<stdlib.h>
void main ()
{
    int* ptr = NULL;
    {
        int a = 5;
        ptr = &a;
        printf ("%d\n",*ptr);
    }
      printf ("%d",*ptr);
}
//  now this pointer is  dangling 