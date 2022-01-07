#include<stdio.h>


int main()
{	
	printf("Pointer Basics\n");
	int a =76;
	int *ptra=&a;
	

	
	printf("The Address of a is %p\n",&a);
	printf("The Address of a is %p\n",ptra );
	
	printf("The Value of a is %d\n", *ptra );
	printf("The Value of a is %d\n", a );
	return 0;
}