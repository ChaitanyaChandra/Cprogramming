#include <stdio.h>
int main()
{
    int a;
    printf("\nenter the exit code\t:");
    scanf("%d",&a);
    if (a == 6805)
        printf("\nyou are right to go chaitanya");

    else if (a != 6805)
        while (a != 6805)
        {
            printf("\nyou are entered the wrong code. please enter the exit code\t:");
            scanf("%d", &a);
        }
        printf("you ae right to go chaitanya");
    return 0;
}
/*
enter the exit code	:5050

you are entered the wrong code. please enter the exit code	:9805

you are entered the wrong code. please enter the exit code	:945564

you are entered the wrong code. please enter the exit code	:545

you are entered the wrong code. please enter the exit code	:4545

you are entered the wrong code. please enter the exit code	:6805
you ae right to go chaitanya
*/
/* in python 
a = int(input("\nenter the exit code\t:"))
if (a == 6805):
    print("\nyou are right to go chaitanya")

elif (a != 6805):
    while (a != 6805):
        a = int(input("\nenter the exit code\t:"))
    print("you ae right to go chaitanya")
 */
