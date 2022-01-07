#include <stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr = (int*)malloc(sizeof(int));
    *ptr=10;
    printf("%d\n",*ptr);
    free(ptr);
    printf("%d\n",*ptr);
}
/*the output is now 10 and some garbage value thus it implies that pointer has become now dangling.