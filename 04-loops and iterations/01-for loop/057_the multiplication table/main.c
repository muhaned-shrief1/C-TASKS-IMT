/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
void main()
{
   int j,n;
   /* input numbers from user */
   printf("Input the number (Table to be calculated) : ");
   scanf("%d",&n);
   printf("\n");
   for(j=1;j<=10;j++)
   {
	/* print Table */
     printf("%d X %d = %d \n",n,j,n*j);
   }
} 