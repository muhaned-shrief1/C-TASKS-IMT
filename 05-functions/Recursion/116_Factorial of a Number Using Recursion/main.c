/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
long int multiplyNumbers(int n);

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}
//function to calculate factorial
long int multiplyNumbers(int n)
{
    if (n >= 1) 
        return n*multiplyNumbers(n-1); // return factorial till n equal 1
    else
        return 1;
}