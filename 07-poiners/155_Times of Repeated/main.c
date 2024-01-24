
/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


# include <stdio.h>
void main ()
{
   /* define array from 10 elements*/
    int array[10];
    /* define four intgers*/
    int i, j, temp,count=0;
      /* define pointer to array */
	int*ptr=array;
    /* input the elements of array from user */
    printf("enter the element of an array \n");
   /* loop to the elements of array from user*/	
    for (i = 0; i < 10; i++)
	{
       scanf("%d", &array[i]);
	}
 while (i>=0&&count==0)
 {
	 for (j = 0; j<=10; j++)
	 {
		 if(ptr[i]==array[j] && i!=j)
		 {
			count++;
			temp=array[j];
		 }
	 }
	 i--;
 }
 printf("this number %d is repeated %d times",temp,count);
} 