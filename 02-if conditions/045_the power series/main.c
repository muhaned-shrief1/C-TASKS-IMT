/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

void main()
{
	/* define two variable are intgers */
	int n, count;
	/* define three variable are float */
	float x, term, sum;
	/* Input the value of x */
	printf("Enter value of x:");
	scanf("%f", &x);
	/* add initial value one to n, term , sum , count */
	n = term = sum = count = 1;
	/* loop until n is greater than 100*/
	while (n <= 100)
	{
		/* calculate the term */
		term = term * x/n;
		sum = sum + term;
		count = count + 1;
		/* if term is less than 0.0001 , assign 999 to n to exit from loop*/
		if (term < 0.0001)
			n = 999;
		else
			n = n + 1;
	}
	printf("Terms = %d Sum = %f\n", count, sum);
}

