#include <stdio.h>

void Product(int a,int b) 
{ 
	int Multiplication; 
	Multiplication = a*b ; /* Definition of Function */ 
	printf("The Product is %d\n\n",Multiplication); 
} 
int main()
{
    Product(5,6);
    return 0;
}