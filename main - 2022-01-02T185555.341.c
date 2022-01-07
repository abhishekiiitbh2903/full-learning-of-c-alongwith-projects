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
    // fputs("this is harry",ptr);
// in this all previous content of file will be deleted and whatever input u will provide to cpu it will be written only in a file 


    fclose(ptr);
    //return 0;
}
