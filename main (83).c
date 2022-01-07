#include <stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr = (int*)malloc(sizeof(int));
    *ptr=10;
    printf("%d\n",*ptr);
    free(ptr);
    ptr=NULL;
    if(ptr==NULL)
    {
        printf ("the pointer is null and hence cannot be dereferenced");
    }
    else
    {
       printf("%d\n",*ptr); 
    }
    // printf("%d\n",*ptr);
}

/* here we gave the solution to the dangling pointer by first declaring it as a null pointer and then by making use of if else staement */
