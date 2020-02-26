// with min finding how many days and years
#include <stdio.h>
int main()
{
    int min;
    double day = 0.0;
    double year = 0.0;
    double MinYear = 0.0;
    printf("enter the min\t:");
    scanf("%d",&min); // & is used in scan f 
    MinYear = (60*24*365);
    day = (min/60)/24;
    year = min/MinYear;
    printf("%d minutes is approximately %f years and %f days",min,year,day);
    return 0;
}
