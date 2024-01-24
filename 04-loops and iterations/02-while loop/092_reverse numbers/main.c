/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/*program to all natural numbers in reverse from n to 1*/
#include<stdio.h>

void main(void)
{
	int start;
	//Input start range from user 
	printf("Enter starting value:");
	scanf("%d",&start);
	int i=start;
	//Run loop from 'start' to 1 and decrement 1 in each iteration
	while (i>=1)
	{
		printf("%d\n",i);
		i=i-1;	
	}
	
}
