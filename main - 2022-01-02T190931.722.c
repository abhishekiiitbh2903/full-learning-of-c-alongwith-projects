#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "a+");
    //  char c = fgets(ptr);
    //  printf("The character I read was %c\n", c );
    //  c = fgetc(ptr);
    //  printf("The character I read was %c\n", c );


   
     fputc('o',ptr);
      fputs("this is harry",ptr);
// it will add our given contents in beforecontents from backside 

    fclose(ptr);
    //return 0;
}
