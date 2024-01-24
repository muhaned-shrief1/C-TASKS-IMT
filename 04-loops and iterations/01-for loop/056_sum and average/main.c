/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


#include <stdio.h>
void main()
{ 
    /* define three intgers*/      
    int i,n,sum=0;
    /* define  one float */
	float avg;
    /* input 10 numbers from user */
	printf("Input the 10 numbers : \n");
	for (i=1;i<=10;i++)
	{
		/* print index of number and input number from user */
                printf("Number-%d :",i);

		scanf("%d",&n);
		/* calculate the sum of numbers */
		sum +=n;
	}
	/* calculate the Avarage of numbers */
	avg=sum/10.0;
	printf("The sum of 10 no is : %d\nThe Average is : %f\n",sum,avg);
 
}