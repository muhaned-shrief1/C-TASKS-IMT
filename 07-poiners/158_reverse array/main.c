/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/ 

#include <stdio.h>
/* main Function*/
void main()
{
	int arry[100]; //************define Array his Size is 100*************
    int i, size;//***************define integer Variables*****************
    int *ptr_arry=arry;
    printf("Enter size of array: "); // to print This Sentence To User
    scanf("%d", &size);      //******to Take Value From user And Put it in Variable size*************   
   printf("Enter elements of array:\n ");    //*******to print This Sentence To User*********
	
	/* for loop*/
	for(i=0;i<size;i++)// to make loop on variable i 
	{
		scanf("%d",(ptr_arry+i));
	}
	printf(" elements of array after reverse: ");
    for(i=size-1; i>=0; i--)    // to make loop on variable i 
    {
      printf("%d,",ptr_arry[i]); 
	}
}