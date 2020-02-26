#include <stdio.h>
int main()
{
    enum weekday{Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
    enum weekday a = Sunday; // assign to the variable
    switch (a)
    {
        case Monday:
            printf("\ntoday is monday");
            break;
        case Tuesday:
            printf("\ntoday is monday");
            break;
        case Wednesday:
            printf("\ntoday is wednsday");
            break;
        case Thursday:
            printf("\ntoday is wednsday");
            break;
        case Friday:
            printf("\ntoday is wednsday");
            break;
        default:
            printf("\ntoday is holiday");
    }

    return 0;
}
//today is holiday

