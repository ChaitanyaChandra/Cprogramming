#include <stdio.h>
int main()
{
    int a = 1;
    do
        {
        printf("%d", a);
        a += 1;
        }
    while (a <= 10);


    printf("\n");
    int b = 1;
    while (b <= 10)
    {
        printf("%d",b);
        b +=1;
    }


    printf("\n");
    for (int c = 1;c <= 10; ++c)
        printf("%d",c);
    return 0;
}
/*
12345678910
12345678910
12345678910
*/
