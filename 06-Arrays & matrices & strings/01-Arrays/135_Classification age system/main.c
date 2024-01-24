/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
int main()
{
    int age[15]={0};
    int i=0,baby=0,attending=0,adult=0;
	printf("Enter 15 an age \n: ");
 for(i=0;i<15;i++)		
	{
		scanf("%d",&age[i]); /* to take number of person*/
	}  
	i=0;
 while(i<15)
 {
	if (age[i] >=0 && age[i] <= 5)
		baby++;
	else if(age[i] >5 && age[i] <= 17)
		attending++;
	else if(age[i] >= 18)
		adult++;
	i++; /* to exite from loop after number 15*/
 }
 printf("\n numbers of Still a baby:%d ",baby);
 printf("\n numbers of Attending school :%d ",attending);
 printf("\n numbers of dult life :%d ",adult);
    return 0;
}