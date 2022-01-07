#include <stdio.h>
//#include "temp.c"
int myfunc(int a, int b)
{
    // auto int myVar;
    int sum ;
    sum =a+b;
    return sum;
}

int main()
{
    // int a;
    // int a;
    // // Declaration - Telling the compiler about the variable (No space reserved)
    // // Definition - Declaration + space reservation
    // register int myVar = myfunc(3, 5);
    // myVar = myfunc(3, 5);
    // myVar = myfunc(3, 5);
    // myVar = myfunc(3, 5);
    // // printf("The myVar is %d\n", myVar);
int sum = myfunc(3,6);
printf("the sum is %d ",sum); 
    return 0;
}
