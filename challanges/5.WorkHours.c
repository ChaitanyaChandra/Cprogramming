#include <stdio.h>

#define PayRate 12.00  //Constants
#define IncrementPayRate 1.5 //for > 40 hours
#define TaxRate_300 .15
#define TaxRate_450 .20
#define TaxRate_rest .25

int main()

{
    int hours;
    double GrossPay = 0.0;
    double Tax = 0.0;
    double NetPay = 0.0;

    printf("enter the no of hours worked in a week :");
    scanf("%d",&hours);

    if (hours <= 40)
        GrossPay = hours * PayRate;
    else
        GrossPay = 40 * PayRate;
        double overtime = (hours - 40) * (PayRate * IncrementPayRate);
        GrossPay += overtime;


    if (GrossPay <= 300)
        {
        Tax = GrossPay * TaxRate_300;
        }
    else if (GrossPay > 300 && GrossPay <= 450 )
        {
        Tax = 300 * TaxRate_300;
        Tax += (GrossPay - 300) * TaxRate_450;
        }
    else
        {
        Tax = 300 * TaxRate_300;
        Tax += 150 * TaxRate_450;
        Tax += (GrossPay - 450) * TaxRate_rest;
        }

    NetPay = GrossPay - Tax;

    printf("\nyour Gross Pay is :%.2f",GrossPay);
    printf("\nyour Tax is :%.2f",Tax);
    printf("\nyour Net Pay is :%.2f",NetPay);

}
/*
enter the no of hours worked in a week :45

your Gross Pay is :570.00
your Tax is :105.00
your Net Pay is :465.00
 */
/* In python
PayRate = 12.00
IncrementPayRate = 1.5
TaxRate_300 = .15
TaxRate_450 = .20
TaxRate_rest = .25

GrossPay = 0.0
Tax = 0.0
NetPay = 0.0

hours = int(input( "enter the no of hours worked in a week :"))

if (hours <= 40) :
    GrossPay = hours * PayRate
else :
    GrossPay = 40 * PayRate
    overtime = (hours - 40) * (PayRate * IncrementPayRate)
    GrossPay += overtime


if (GrossPay <= 300):
    Tax = GrossPay * TaxRate_300
elif (GrossPay > 300 and  GrossPay <= 450 ):
    Tax = 300 * TaxRate_300
    Tax += (GrossPay - 300) * TaxRate_450
else :
    Tax = 300 * TaxRate_300
    Tax += 150 * TaxRate_450
    Tax += (GrossPay - 450) * TaxRate_rest

NetPay = GrossPay - Tax;

print(f"your Gross Pay is :{GrossPay}")
print(f"your Tax is :{Tax}")
print(f"your Net Pay is :{NetPay}")

#enter the no of hours worked in a week :45
#45
#your Gross Pay is :570.0
#your Tax is :105.0
#your Net Pay is :465.0
*/
