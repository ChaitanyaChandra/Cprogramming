#include <stdio.h>
int main()
{
    int a = 1 ;
    while (a <= 5)
    {
        printf("\n%d", a);
        ++a;
    }
    return 0;
}
/*
a = 1
l = []
while a <= 5:
    print(a)
    l.append(a)
    a += 1
print(f"sum:{sum(l)}")
# 1
# 2
# 3
# 4
# 5
# sum:15
*/
