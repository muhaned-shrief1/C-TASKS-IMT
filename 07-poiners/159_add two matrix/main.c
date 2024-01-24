/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

/* main Function*/
int main()
{
    int i,size,search; //***********define integer Variables**********
    int arr[100];//******************to define Array his size is 100***********
	int*ptr_arr=arr;//************to define pointer*************
    printf("Enter size of array: ");//*****************to print This Sentence to User***********
      scanf("%d", &size);    // to take Value from User And Put It in Variable Size 
 printf("Enter elements of array:\n ");   //*****************to print This Sentence to User***********
/* for loop*/   
   for(i=0; i<size; i++) //***********to make loop on variable i***********
    {
		scanf("%d", (ptr_arr+i)); //**********to take values from User by number of Size 
	}
	 printf("Enter the element to search:\n ");    //*****************to print This Sentence to User***********
	  scanf("%d", &search);   //***** to take Value from user And Put it in Variable Search *************
	   for(i=0; i<=size; i++)
    {
		if(ptr_arr[i]==search)
		{
		  printf("%d is found in position number %d",search,i+1);
		}
	}
	
    return 0;
}