/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
/* main function*/
int main()
{
    int month;

    /* Input month number from user */
    printf("Enter month number (1-12): ");
    scanf("%d", &month);  /*take value from user And put it in variable month*/
	if((month>12)&& (month<1))
   {
	    printf("Invalid input! Please enter month number between (1-12).");
	
   }
   /* switch case*/
   switch(month)
   {
	   case 1:
	   case 3:
	   case 5:
	   case 7:
	   case 8:
	   case 10:
	   case 12:
	           printf("31 days");
			    break;
		case 2:
		       printf("28 or 29 days");
			    break;
	     case 4:
	     case 6:
	     case 9:
	    case 11:
			    printf("30 days");
			    break;
   }
   return 0;
	   
}