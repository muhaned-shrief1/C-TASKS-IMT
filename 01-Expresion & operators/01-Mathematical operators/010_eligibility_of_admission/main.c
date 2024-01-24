/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/* Include stdio.h library
   To use printf and scanf function */
#include<stdio.h>
/* define the main function */
void main (void)
{
	/* Define four integers */
	int course_one,course_two,course_three,total;
	
     /* Ask the user to enter value of the degree of course one: */
	printf("\n enter the degree of course one:");
  /* Scan the value and save it in course_one*/
	scanf("%d",&course_one);
 /* Ask the user to enter value of the degree of course two: */
	printf("\n enter the degree of course two:");
/* Scan the value and save it in course_two*/
	scanf("%d",&course_two);
 /* Ask the user to enter value of the degree of course three: */
	printf("\n enter the degree of course three:");
/* Scan the value and save it in course_three*/
	scanf("%d",&course_three);
	/*calculate the total*/
	total=course_one+course_two+course_three;
	if(total>=180 || (course_one>=65) && (total>=140))
		printf("\n the candidate is eligible for admission");
	else
		printf("\n the candidate is not eligible for admission");
}
	