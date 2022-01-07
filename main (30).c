#include <stdio.h>
float Percentage(int x,int y) 
{ 
	float perct; 
	perct = ((x+y)/200.0)*100.0; // Definition of Function 	return perct; 
    return perct;}

int main()
{
float perct;
perct=Percentage(78,98);
printf ("the percentage is %f\n\n:",perct);
return 0;
}