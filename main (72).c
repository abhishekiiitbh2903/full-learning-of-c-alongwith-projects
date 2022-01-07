#include <stdio.h>
//#include<stdlib.h>
struct Driver
{
    char name[30];
    char dlNo[45];
    char route[76];
    int kms;
};
int main()
{
    struct Driver d1,d2,d3;
    printf ("enter the details of the drivers \n");
    printf ("enter the name  of the first drivers \n");
    scanf ("%s", &d1.name );
     printf ("enter the dlNo of the first drivers \n");
    scanf ("%s", &d1.dlNo );
    printf ("enter the route of the first drivers \n");
    scanf ("%s", &d1.route );
    printf ("enter the kms of the first drivers \n");
    scanf ("%d", &d1.kms );
    printf ("enter the name  of the second drivers \n");
    scanf ("%s", &d2.name );
     printf ("enter the dlNo of the second drivers \n");
    scanf ("%s", &d2.dlNo );
    printf ("enter the route of the second drivers \n");
    scanf ("%s", &d2.route );
    printf ("enter the kms of the second drivers \n");
    scanf ("%d", &d2.kms );
    printf ("enter the name  of the third drivers \n");
    scanf ("%s", &d3.name );
     printf ("enter the dlNo of the third drivers \n");
    scanf ("%s", &d3.dlNo );
    printf ("enter the route of the third drivers \n");
    scanf ("%s", &d3.route );
    printf ("enter the kms of the third drivers \n");
    scanf ("%d", &d3.kms );
    
    printf ("********printing information of these drivers********");
    printf("\nFor driver no 1 \n his name is %s",d1.name );
    printf("For driver no 1 \n his dlNo is %s",d1.dlNo );
    printf("For driver no 1 \n his route is %s",d1.route );
    printf("For driver no 1 \n his kms is %d",d1.kms );
    
    printf("\nFor driver no 2 \n his name is %s",d2.name );
    printf("For driver no 2 \n his dlNo is %s",d2.dlNo );
    printf("For driver no 2 \n his route is %s",d2.route );
    printf("For driver no 2 \n his kms is %d",d2.kms );
    
    printf("\nFor driver no2 \n his name is %s",d3.name );
    printf("For driver no 2\n his dlNo is %s",d3.dlNo );
    printf("For driver no2 \n his route is %s",d3.route );
    printf("For driver no2 \n his kms is %d",d3.kms );
   
   
    
}