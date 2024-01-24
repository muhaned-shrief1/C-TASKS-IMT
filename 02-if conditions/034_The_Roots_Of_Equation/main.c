/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include<stdio.h>
#include<math.h>
void main (void)
{
	float a,b,c,x,z,y;       //Define Float Variable 
	printf("enter the value a:");
	scanf("%f",&a);
	printf("enter the value b:");
	scanf("%f",&b);
	printf("enter the value c:");
	scanf("%f",&c);
	z=(b*b)-(4*(a*c));    // To Get Result Of Operation 
	if(a==0&&b==0)        // to Check That A And B Not equal Zero 
		printf("no solution");
	else if(a==0)     // To Check That A Equal Zero 
	{
		x=(-c/b);  //To get result And Put It In X
		printf("x=%f",x);
	}
	else if(z<0)       
		printf("no roots");
	else      
	{
		x=(-b+(pow(z,0.5)))/(2*a);
		y=(-b-(pow(z,0.5)))/(2*a);
		printf("x=%f",x);
		printf("\ny=%f",y);
	}
}