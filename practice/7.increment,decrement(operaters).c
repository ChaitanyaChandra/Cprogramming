#include <stdio.h>
int main()
{
    int a , b , c , d ,i , j;
    a = 40;
    i = a; // cloning a variable and making a main variable constant
    j = a;
    b = ++i;
    c = --j;
    printf("the value a :%i is incremented  by value :%i ",a,b);
    printf("\nthe value a :%i is decremented by  value :%i ",a,c);
    return 0;
}
//the value a :40 is incremented  by value :41
//the value a :40 is decremented by  value :39
