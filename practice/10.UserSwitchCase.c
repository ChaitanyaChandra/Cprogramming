#include <stdio.h>
int main()
{
    int a,b;
    char c;
    printf("enter your expression\t:");
    scanf("%d%c%d",&a,&c,&b);
    switch (c)
    {
        case '+':
            printf("\n%d%c%d:%d",a,c,b,a+b); // .2 will remove two decimals in case of float
            break;
        case '-':
            printf("\n%d%c%d:%d",a,c,b,a-b);
            break;
        case '/':
            printf("\n%d%c%d:%d",a,c,b,a/b);
            break;
        case '*':
            printf("\n%d%c%d:%d",a,c,a*b);
        default:
            printf("\nerror please try again");

    }
}
//enter your expression	:50+60
//
//50+60:110
