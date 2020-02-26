// int : %i , %d
// float : %f
// double : %e ,%g
// char : %c
// string : %s
// _Bool : %i
#include <stdio.h>
int main()
{
    int a;
    a = 40;
    float b;
    b = 40.10;
    char c;
    c = 'c';
    char str[] = "chandra";
    double d;
    d = 6.44545475475457;
    _Bool e;
    e = 1;

    // using format specifiers
    //int
    printf("int:%i",a);
    printf("\nint:%d",a);
    //float
    printf("\nfloat:%f",b);
    //double (float)
    printf("\ndouble:%e",d);
    //char
    printf("\nchar:%c",c);
    // str(char str)
    printf("\nchar str:%s",str);
    //_Bool
    printf("\nbool:%i",e);
}
