//scanf has fixed variables 
#include <stdint.h>
int main()
{ //indentation
    char str[5];
    int i;

    printf("what is your name :");
    scanf("%s",str); // s for string in char

    printf("what is your age :");
    scanf("%d",&i); //  d for digit in int
    //int is represented with &i only in scanf

    printf("\nyour name is :%s and your age is %d",str,i);
    return 0;

}