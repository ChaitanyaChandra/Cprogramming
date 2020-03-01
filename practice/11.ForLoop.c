#include <stdio.h>
int main()
{
    for     (
            int i = 1,j=2;
            i <= 5;
            ++i,j += 2 // ++ increment , -- decrement
            )
        printf("\n%d",i*j);

    return 0;
}
/* in python
for i in range(1,6):
    print(i)
*/
