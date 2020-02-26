#include <stdio.h>
int main(void)
{
    char name[10];
    int  age;
    printf("\nenter your name\t:");
    scanf("%s", name);
    printf("\nenter your age\t:");
    scanf("%d",&age); // & is used in int

    if (age>=18)
        printf("\n%s your age is :%d great you have access in elections", name, age);

    else if (age<18)
        printf("\n%s your age is :%d oh no! you don't have access in elections", name, age);

    else
        printf("\n%s you don\'t have access\t:%d", name, age);
}

/*
 *
enter your name	:chandra

enter your age	:20

chandra your age is :20 great you have access in elections
 
 
 
enter your name	:chaitanya

enter your age	:12

chaitanya your age is :12 oh no! you don't have access in elections
 
 */

