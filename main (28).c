#include <stdio.h>
// Without arguments and with return value :
int Sum() 
{ 
	int x,y,z; 
	printf("Enter no. 1 : \t"); 
	scanf("%d",&x); 
	printf("\nEnter no. 2 : \t"); 
	scanf("%d",&y ); 
	z=x+y; 
	return z; 
} 
int main()
{
    int z;
    z=Sum();
    printf("the value of a+b is:%d\n",z);
    return 0;
}