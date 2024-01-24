/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

int *fun(int*ptr,int num_array); //******************to define prototypeof Function************ 

void main()
{
    int array[100]={0};  //*****************to define integer Array******************** 
	int n,i,j=0,k=0;     //******************to define integer Variables*************** 
	int*result;
	 printf("Enter the number of elements: ");
     scanf("%d",&n);     // ************to take value from user And put it in variable in*************

	 for(i=0;i<n;i++)   //********* to maker loop on variable i************
	 {
	   printf("Enter  elements[%d] of array: ",i);
		scanf("%d",&array[i]);  //******************to take value from user and up it in Array of i********************
	 }
	 result=fun(array,n);
	 for(i=0;i<n;i++) 
	 {
	 if(result[i]==1) // to check if Number of i in Array ==1
	 {
		 j++;   //******************to increment variable k by 1**************
	 }
	 else
	 {
		 k++;  //*******************to increment variable k by 1**********************
	 }
	 }
		 printf("%d of elements of array  result from 3 power n\n ",j);//******to display value of i**************
		 printf("%d of elements of array not result from 3 power n ",k);//******to display value of k**************
}

  int *fun(int*ptr,int num_array) 
  {
	  int i=0,flag=0;
	  static int res_array[100]={0};
	  for(i=0;i<num_array;i++) //**************to make loop on i********************
	  {		
  if(ptr[i]==1)  //*****************to check on Array of i**********************
  {
	  res_array[i]=1;
  }
  else{
	while(ptr[i]>3)
	  { 	
      if((ptr[i]%3)!=0)
	    {
		flag++;   //********************to increment flag by 1**********************
	    }
          ptr[i]=ptr[i]/3;			
	  }
	  if((ptr[i]==3 && flag==0) ) //******************to check if ptr of i ==3 And Also flag ==0******************
	  {
	  res_array[i]=1;             //******to equal Array of i =1*********
	  }
	  else   // if condition is Error Will be Exequte this order 
	  {
		  res_array[i]=0;        ////******to equal Array of i =0*********
	  }
  }
	  }
	  return res_array;
  }