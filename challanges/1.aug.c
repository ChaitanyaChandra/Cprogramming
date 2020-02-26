#include <stdio.h>
#include <stdlib.h> # use standard library in order to use atoi
int main(int a , char *b[])
{
    double heightA , widthA , perimeterA , areaA ;
    //perimeter = height + width
    //area = hight * width
    heightA = atoi(b[1]);
    widthA = atoi(b[2]);
    perimeterA = 2*(heightA + widthA);
    areaA = heightA * widthA;
    printf("\nthis is perimeterA of a rectangle\t:%f",perimeterA);
    printf("\nthis is areaA of a rectanle\t:%f",areaA);
    double width , height , perimeter , area ;
    //perimeter = height + width
    //area = hight * width
    height = 15.3;
    width = 32.3;
    perimeter = 2*(height + width);
    area = height * width;
    printf("\n\nthis is perimeter of a rectangle\t:%f",perimeter);
    printf("\nthis is area of a rectanle\t:%f",area);
    return 0;
}
//this is perimeterA of a rectangle	:94.000000
//this is areaA of a rectanle	:480.000000
//
//this is perimeter of a rectangle	:95.200000
//this is area of a rectanle	:494.190000
