/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include<stdio.h>
/* prototype of square function  */
int square(int num);
void main ()
{
	
	int number, result=0;
	printf("Enter intger number to find square root:");
	scanf("%d",&number);
	result=square(number);
	if (result==1)
		printf("no have intger number result from square root to this number");
	else
	printf("Square root of %d =%d ",number,result);
}
int square(int num)
{
	int i=1,result;
	while(i<=num)
	{
		result=num/i;
		if(result==i)
			return i;
		
		else if(i==num)
	           return result;
			else
		       i++;
	}
	
}