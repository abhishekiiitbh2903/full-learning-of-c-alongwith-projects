#include <stdio.h>

int main(){
int x=5;
int *a= &x;
printf("the value of x is %d\n",x);
printf("the value of x is %d\n",*a);
printf("the value of a is %d",a);
return 0;
}