#include <stdio.h>
#include <string.h>
int main( ) { 
char  s[ ] = "Hello" ;
char  t[30] = "World" ;
strcat ( s, t ) ;
printf ( "String = %s", s );
return 0;

}
//Output: string = HelloWorld