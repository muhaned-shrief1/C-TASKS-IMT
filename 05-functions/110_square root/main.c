/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
 int sqr(int number); // to define prototype of function
 /* main function*/
 void main()
{
int num, result; // to define integer variables
printf("enter the number:"); // to display this sentence to user
scanf("%d",&num); // to take value of number and put it in num 
  result=sqr(num);  //*******to put the value of result in sqr(num)
  if(result==0)    //to check if result == 0 will be exquet the next order 
  {
	  printf("no root");
  }
  else
  {
	  printf("result = %d", result);
  }
}
int sqr(int number)
{
	int i=2,z=2,result;   // define integer variables
	while(i!=number/2) 
	{
		z=number/i;
		if(z==i)
		{
			result=z;
			break;
		}
		else
		{
			i++;  //  to increment i by 1
		}
	}
	if(i==number/2) // to check if i equal 
	{
		result=0;
	}
	return result;
}
