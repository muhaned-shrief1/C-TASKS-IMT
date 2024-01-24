/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include<stdio.h>
void main (void)
{
	int course_one,course_two,course_three,total;  // Define Variable 
	
	printf("\n enter the degree of course one:");   
	scanf("%d",&course_one);                   // To Take first Value 
	printf("\n enter the degree of course two:");
	scanf("%d",&course_two);                     // To Take Second Value 
	printf("\n enter the degree of course three:");
	scanf("%d",&course_three);                    // To Take Third Value 
	total=course_one+course_two+course_three;      //to Add 3 Value Together And Get The Result 
	if(total>=180 || (course_one>=65) && (total>=140))   // To Check Of Btween Them 
		printf("\n the candidate is eligible for admission");     //To Print Eligible Or Not 
	else
		printf("\n the candidate is not eligible for admission");
}
	