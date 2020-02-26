// finding a size of datatypes
#include <stdio.h>
int main()
{
    printf("this is size of a int data type\t:%u bytes" , sizeof(int));
    printf("\nthis is size of a float data type\t:%u bytes" , sizeof(float));
    printf("\nthis is size of a double data type\t:%u bytes" , sizeof(double));
    printf("\nthis is size of a char data type\t:%u bytes" , sizeof(char));
    printf("\nthis is size of a  long int data type\t:%u bytes" , sizeof(long int));
    printf("\nthis is size of a  long long  int data type\t:%u bytes" , sizeof(long long int));
    printf("\nthis is size of a long double data type\t:%u bytes" , sizeof(long double));
    printf("\nthis is size of a short \t:%u bytes" , sizeof(short));
    return 0;
}
/*
        this is size of a int data type	:4 bytes
        this is size of a float data type	:4 bytes
        this is size of a double data type	:8 bytes
        this is size of a char data type	:1 bytes
        this is size of a  long int data type	:8 bytes
        this is size of a  long long  int data type	:8 bytes
        this is size of a long double data type	:16 bytes
        this is size of a short 	:2 bytes
*/
