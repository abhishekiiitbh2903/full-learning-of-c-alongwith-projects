#include <stdio.h>
int AddNumber (int n1, int n2){
return n1+n2;
}
int main()
{
int (*fun) (int, int);/*in this step we are telling our compiler that this function will take two integers
and will give single integer as an output*/
 fun = AddNumber;
int res1 = fun(20, 20);
int res2 = AddNumber(20, 20);
printf("Using function pointer: %d",res1);
printf("\nUsing function name: %d",res2);
return 0;
}