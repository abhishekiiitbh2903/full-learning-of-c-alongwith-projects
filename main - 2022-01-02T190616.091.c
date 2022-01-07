#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+");
    //  char c = fgets(ptr);
    //  printf("The character I read was %c\n", c );
    //  c = fgetc(ptr);
    //  printf("The character I read was %c\n", c );


   
     fputc('o',ptr);
      fputs("this is harry",ptr);
/* in this the file doesn't get fully cleared like opening up in the writing mode . suppose you would be having 100 characters 
characters written and if you insert 45 characters by making use of command then in execution starting 45 characters will
be replaced by your characters and rest will remain unchanced */


    fclose(ptr);
    //return 0;
}
