/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>


/* root Function   */
int root(int number, int num_root);//********to Define Prototype Of This Function************
/* main Function */
int main()  
{
    int num;  //**********Define integer Variable*********
    int n;//**********Define integer Variable*********
	int result=0;//****************define This Variable And Equal by 0****************
	 printf("Enter the number that you want to find root  : ");//*********to print This Sentence to User******************
     scanf("%d", &num);     // to take Value From User And Put It in Variable num
	 printf("Enter the number of root : ");     //*********to print This Sentence to User******************
	 scanf("%d", &n);     //***************to take Value From User And Put It in Variable n*******************
	 result=root(num,n);  // To Put Value Of Result in This Function
	 if(result==0)   //*********to Check if Result Equal 0 Will be Exquet The Next Order***********
		 printf("this is number not have root");
	 else
		 printf("the root %d of %d = %d",n,num,result);
}

  int root(int number, int num_root)/* root Function   */
  {
	  int i,j=2,result=0,flag=0; //*********** Define Integer Variables And Equal result And Flag by 0****************
	  int temp=number; //***************Define Variable temp Equal number***********
	  while(number/2!=j)
	  {
	  for(i=0;i<num_root-1;i++)
	  {
		  if((number%j)!=0)//************to check if the reminder btween number And i Not Equal 0 ***************
		  {
			  flag++;  //*****************to increment flag by 1*****************
		  }
		  number=number/j; //*******to put the Result of Divide in Variable number**************
	  } 
	  
	  if(number==j&&flag==0) //**********to check if number == variable j And Flag Equal 0 Will be Exquet The Next Order**************
	  {
		  result=number; //********************to put value of Result in variable number******************
	  }    
	  else
	  {
		
		     j++;  //***************increment variable j by 1**********************
		    number=temp;  //*******to put The Value of Number in Variable Temp
			flag=0;
	  }
	  }
	  return result;  //******************to Return Value of Result**************
  }