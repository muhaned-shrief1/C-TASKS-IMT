/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


#include <stdio.h>
/*implement power function*/
int  power(int n, int r)
 {
   /* define two intger with inialial value equal 1*/	
   int c, p = 1;
 
   /* loop to get the power  */
   for (c = 1; c <= r; c++) 
      p = p*n;
 
   /* return the result */ 
   return p;   
}

/* define prototype of function */
long long convertOctalToBinary(int octalNumber); 
int main()
{
    /* define one intger */
    int octalNumber;

    /* input from user to enter octal number */ 
    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);
    
    /* call convertOctalToBinary function and print the octal number and binary after calling  */
    printf("%d in octal = %lld in binary", octalNumber, convertOctalToBinary(octalNumber));

    return 0;
}
/* function to convert from octal to binary*/
long long convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;
    /* loop to convert from octal to decimal */
    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * power(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    /* loop to convert from decimal to binary */
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    /* return the result */
    return binaryNumber;
}