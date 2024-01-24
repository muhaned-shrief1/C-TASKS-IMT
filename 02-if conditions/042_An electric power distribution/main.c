/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


#include <stdio.h>
 
int main()
{
	/* define two intgers */
	int units, custnum;
	/* define one variable float */
	float charges;
	/* Input year from user */
	printf("Enter CUSTOMER NO. and UNITS consumed\n");
	scanf("%d %d", &custnum, &units);
	/* if units less than and equal 200 , charges = 0.5*units */
	if (units <= 200)
	charges = 0.5 * units;
	/* if units less than and equal 400  , charges = 100+0.65*(units-200) */
	else if (units <= 400)
	charges = 100 + 0.65 * (units - 200);
	/* if units less than and equal 600  , charges = 230+0.8*(units-400) */
	else if (units <= 600)
	charges = 230 + 0.8 * (units - 400);
	/* if units greater than 600  , charges = 390+(units-600) */
	else
	charges = 390 + (units - 600);
	printf("\n\nCustomer No: %d:\n Charges = %.2f\n",custnum, charges);
}