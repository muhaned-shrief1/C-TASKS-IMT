/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
 
void print_floyd(int); // to define prototype of function
 /* function*/
int main() 
{
  int n, i,  c, a = 1;   //define integer variables
 
  printf("Input number of rows of Floyd's triangle to print\n");
  scanf("%d", &n);   t/* to take value from user and put it in variable n*/
 
  print_floyd(n);
 
  return 0;
}
 /* function*/
void print_floyd(int n) {
   static int row = 1, c = 1;   
   int d;
 
   if (n <= 0)
      return;
 
   for (d = 1; d <= row; ++d)
      printf("%d ", c++);
 
   printf("\n");
   row++;   /* to increment row by 1*/
 
   print_floyd(--n);   
}
