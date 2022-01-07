#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a =4354;
    int *ptr = (int*)malloc (sizeof (int));
    *ptr=8;
    printf("%d",*ptr);
    return 0;
}
// this is another way to directly give a value to address without making a variable 