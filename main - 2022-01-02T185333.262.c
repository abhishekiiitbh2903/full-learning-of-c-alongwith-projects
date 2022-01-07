#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r");
    //  char c = fgets(ptr);
    //  printf("The character I read was %c\n", c );
    //  c = fgetc(ptr);
    //  printf("The character I read was %c\n", c );


    char str[4];
    fgets(str, 23, ptr);
    printf("The string is %s\n", str);/*here we have made a character array of length four but we are accesssing 23 characters of a string so stack smash will be detected and stack wioll overflow.but it will read the message and taht is what the main point to think upon*/

    // fputc('o',ptr);
    // fputs("this is harry",ptr);



    fclose(ptr);
    //return 0;
}
