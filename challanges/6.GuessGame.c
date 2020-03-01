#include <stdio.h>
#include <stdlib.h> // for rand function
#include <time.h>
int main()
{
    int a , b ,c,i ;
//    time_t t;
//    srand((unsigned) time(&t));
    b  = rand() % 21; // generate random number below 20
    c = b;
    printf("\nThis is the Guessing Game");
    printf("\nChoose the number between 0 and 20");
    for (i = 5 ; i >= 0 ; --i) // >
    {
        printf("\n\nyou have :%d Tr%s left Try again", i ,i == 1 ? "y" : "ies"); //if condition  of over tries (") strings
        printf("\n\nguss the number\t:");
        scanf("%d",&a);

        if (b == a)
        {
            printf("\n************************************you got it boss !************************************");
            return 0;
        }
        else if (a < 0 || a >= 21 )
            printf("\ni said it was between 0 - 20");
        else if (b < a )
            printf("\nyour number %d is less than that hint :(%d)-108" ,a,c+108);
        else if (b > a )
            printf("\nyour number %d is higher than that" ,a);

    }
    return 0;
}
/*
 This is the Guessing Game
Choose the number between 0 and 20

you have :5 Tries Try again

guss the number	:50

i said it was between 0 - 20

you have :4 Tries Try again

guss the number	:10

your number 10 is less than that hint :(115)-108

you have :3 Tries Try again

guss the number	:7

************************************you got it boss !************************************
 */
/*
import random
b = random.randrange(1,21)
c = b
i = 1
print("This is the Guessing Game\nChoose the number between 0 and 20")
num = range(5,0,-1) # range from 5to0(loop)
for i in num:
    if i == 1:
        addin = 'y'
        addin2 = 'Try again'
    elif i == 5:
        addin = 'ies'
        addin2 = ''

    else:
        addin = 'ies'
        addin2 = 'Try again'

    print(f"\nyou have :{i} Tr{addin} left  {addin2}!")
    a = int(input("\nguss the number\t:"))
    if (b == a):
        print ("\n************************************you got it boss !************************************")
        break
    elif (a < 0 or a >= 21 ):
        print("\ni said it was between 0 - 20")
    elif (b < a ):
        print(f"\nyour number {a} is less than that hint {c+108}-108")
    elif (b > a ):
        print(f"\nyour number {a} is higher than that hint {c+108}-108")
 */
