/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
int main()
{
char item[20];
double price = 0.0, shipping = 0.0, total = 0.0;
int over_delivery, stop = 1;
while(stop != -1)
{ // if stop != 1, continue...// prompt for user input
printf("Enter the item name or description: ");
// the 3rd parameter is required for character and string
// store item
scanf("%s", item);
// prompt user for price
printf("Enter the price ($): ");
// store price
scanf("%lf", &price);
// prompt user for overnight delivery choice
printf("Overnight delivery (0 = No, 1 =Yes)?: ");
// store the choice
scanf("%d", &over_delivery);
// if the overnight delivery is needed...
if(over_delivery == 1)
{
if(price < 10)
shipping = 2.00 + 5.00;
else
shipping = 3.00 + 5.00;
}
// if no overnight delivery
if (over_delivery == 0)
{
if(price < 10)
shipping = 2.00;
else
shipping = 3.00;
}
// print all the results
printf("Invoice (in $):\n");
printf("%-23s %15.2f\n", item, price);
printf("shipping %30.2f\n", shipping);
total = price + shipping;
printf("total %33.2f\n", total);
// prompt user for continuation....
printf("More item? -1 to stop, any number to continue: ");
scanf("%d", &stop, sizeof(int));
}
return 0;
}