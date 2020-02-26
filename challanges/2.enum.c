#include <stdio.h>
int main()
{
    enum name {CHANDRA , CHAITANYA ,CHOWDARY ,CHAIU ,CHAITUCHOWDARY}; //enum is a int which is  defined key index (0-)
    enum name a = CHAITANYA;
    enum name b = CHAITUCHOWDARY;
    enum name c = CHAIU;
    printf("\nthis is chaitanya with sr.no         :%i",a);
    printf("\nthis is chaituchowdary with sr.no    :%i",b);
    printf("\nthis is chaitu with sr.no            :%i",c);
    return 0;
}
//this is chaitanya with sr.no         :1
//this is chaituchowdary with sr.no    :4
//this is chaitu with sr.no            :2
