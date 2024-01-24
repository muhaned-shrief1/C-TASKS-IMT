/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
 float  double_power(float number, int power,float*ptr);
  void main()
 
  {
	  int num,p;
	  float result=0;
	  float z;
	 printf ("enter value of number:");
	 scanf("%d",&num);
	 printf ("enter the power:");
	 scanf("%d",&p);
	 result= double_power(num,p,&z);
	 printf ("\n%d power to %d=%f",num,p,result);
     printf ("\n%d power to %d=%f",num,-1*p,z);
  
  }
  float  double_power(float number, int power,float*ptr)
  {
   int c; 
   float pow = 1.0;
   if(power>0)
   {
   for (c = 1; c<=power; c++) 
      pow = pow*number;
   }
   *ptr=1.0/pow;
   return pow;   
 }