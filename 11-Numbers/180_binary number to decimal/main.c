/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
/* define function*/
int  power(int n, int r)
 {
   int c, p = 1; //***define integer variables*******
 /*for loop*/
   for (c = 1; c <= r; c++) 
      p = p*n;
 
   return p;   //**********to return value of p*****
}
int convertBinaryToDecimal(long long n); //*******to define prototype of function*******
/* main function */
int main()
{
    long long n; // define variable n
    printf("Enter a binary number: "); /* to print this sentence to user*/
    scanf("%lld", &n);                 /*to take value from user and put it in variable n*/
    printf("%lld in binary = %d in decimal", n, convertBinaryToDecimal(n));
    return 0;
}
/*function*/
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;   // put the result of operation in variable reminder 
        n /= 10;
        decimalNumber += remainder*power(2,i);   
        ++i;   // increment i by i
    }
    return decimalNumber;
}