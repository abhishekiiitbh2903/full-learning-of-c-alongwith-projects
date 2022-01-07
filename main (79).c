#include <stdio.h>
int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &b;
    printf("The value of b is %.2f\n", *((float *)ptr));
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    return 0;
}
//remarks 
/* void pointer is a kind of pointer that can be used conveniently as per our convenience . 
By making use of void pointer we can convert is as per our wish */