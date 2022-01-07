#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "w");
    //  char c = fgets(ptr);
    //  printf("The character I read was %c\n", c );
    //  c = fgetc(ptr);
    //  printf("The character I read was %c\n", c );


   
    fputc('o',ptr);
     fputs("this is harry",ptr);



    fclose(ptr);
    //return 0;
}
