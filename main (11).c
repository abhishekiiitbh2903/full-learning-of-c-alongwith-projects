#include <stdio.h>

    int main() {
        int i ;
       printf("type the number\n");
       scanf("%d", &i);

        switch (i) {
            case 5:
            printf("Value is 7");
                break;

            case 0:
            printf("Value is 8");
                break;

            case 9:
            printf("Value is 9");
                break;

            default:
            printf("Value is not present");
                break;
        }
        return 0;
    }
