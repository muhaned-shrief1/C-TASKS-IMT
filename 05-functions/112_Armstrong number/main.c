/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
 
int check_armstrong(long long); //*************to define prototype of function******
long long power(int, int);      //************to define prototype of function*******
 /* main function*/
int main () {
   long long n; /**********define variable********/ 
 
   printf("Input a number\n");
   scanf("%lld", &n); /* to take value from user
                         and put it in variable n*/
 
   if (check_armstrong(n) == 1) // to chaek about function
      printf("%lld is an armstrong number.\n", n); 
   else
      printf("%lld is not an armstrong number.\n", n);   
 
   return 0;
}
 /* function*/
int check_armstrong(long long n) {
   long long sum = 0, temp; // to define variables
   int remainder, digits = 0; 
 
   temp = n;   // to equal temp with n
 
   while (temp != 0) {
      digits++;    /* to increment value of this
	                variable by1 */
      temp = temp/10;  // to make this operation and put it in variable temp
   }
 
   temp = n;
 
   while (temp != 0) {
      remainder = temp%10;
      sum = sum + power(remainder, digits);
      temp = temp/10;
   }
 
   if (n == sum)   // to check if n == sum if this condition is true will be exquet the next order
      return 1;
   else
      return 0;
}
 /* function*/
long long power(int n, int r) {
   int c;
   long long p = 1;
      /* for loop****/
   for (c = 1; c <= r; c++) 
      p = p*n;
 
   return p;   
}