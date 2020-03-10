// btw 1 to 1000,find addition of first five numbers (divisible by  5 and 3)
#include <stdio.h>
int  main() {
    int count = 0;
    int sum = 0;
    for (int a = 1 ; a <= 1000; ++a)
        if ((a % 3 == 0) && (a % 5 == 0 )){
            sum += a;
            count++;
            printf("\nfound number : %d",a );
            if (count == 5){ //break at count 5
                break ;
            }
        }
    printf("\n%d",sum);
}
/*
found number : 15
found number : 30
found number : 45
found number : 60
found number : 75
225
 */