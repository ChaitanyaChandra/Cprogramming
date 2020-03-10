#include <stdio.h>
int  main() {
    int a = 5;
    switch (a)
    {
        case 1:
            printf("value equal to one ");
            break;
        case 2:
            printf("this is not equal to one ");
            break;
        case 3: case 4:case 5 :
            printf("this is not equal to 3,4,5 ");
            printf("\nactually this is equal to :%d",a);
            break;
        default:
            printf("it's ok ");
            break;

    }
}
/*
this is not equal to 3,4,5
actually this is equal to :5
 */