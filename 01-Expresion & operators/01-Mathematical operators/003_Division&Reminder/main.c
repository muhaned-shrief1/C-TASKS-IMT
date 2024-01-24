/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>

/* define the main function */
int main()
{
	/* Define four integers */
	int number1,number2, div=0,rem=0;

	/* Ask the user to enter value 1 */
	printf("Please Enter number 1: "); 

	/* Scan the value and save it in number1 */
	scanf("%d",&number1);                             
	
	/* Ask the user to enter value 2 */
	printf("Pleae Enter number 2:  ");

	/* Scan the value and save it in number1 */
	scanf("%d",&number2); 

	/*calculate the division*/                
	  div=number1/number2;

	/*calculate the reminder */  
	  rem=number1%number2;

	/*print the division value */
	printf("the division = %d\n",div);  
 
	/*print the reminder value*/
	printf("the reminder = %d",rem);

	return 0;
}