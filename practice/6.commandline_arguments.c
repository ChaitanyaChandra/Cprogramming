// command line arguments help us passing a data without user input
// must specify arguments in Debug configurations > programme arguments
#include <stdio.h>
int main(int a , char *b[]) // int act as a number of arguments  and char acts as arguments name
{
    int no_of_items = a;
    char *chaitanya = b[0];
    char *chandra = b[1];
    char *chaitu = b[2];
    printf("no of items ,%i",a);
    printf("\nname ,%s",chaitanya); // arg one is programme name
    printf("\nname2 ,%s ",chandra);
    printf("\nname2 ,%s ",chaitu);
    return 0;
}
/* output:
no of items ,3
name ,/Users/chaitanyachowdary/Test/cmake-build-debug/Test
name2 ,chaitanya
name2 ,chowdary
*/
