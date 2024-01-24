/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
void main()
{
   /* define two intgers*/
    int  j, sum = 0;

    printf("The first 10 natural number is :\n");

   /*loop to take 10 numbers from user*/
    for (j = 1; j <= 10; j++)
    {
	/* calculate the sum of number */
        sum = sum + j;
        printf("%d ",j);    
    }
    /* print the sum */
    printf("\nThe Sum is : %d\n", sum);
}