/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
int  power(int n, int r)
 {
   int c, p = 1;
 
   for (c = 1; c <= r; c++) 
      p = p*n;
 
   return p;   
}

int convertBinarytoOctal(long long binaryNumber);/* prototype of function*/
int main()
{
    long long binaryNumber;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    printf("%lld in binary = %d in octal", binaryNumber, convertBinarytoOctal(binaryNumber));

    return 0;
}
/* function to convert from Binary to octal*/
int convertBinarytoOctal(long long binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * power(2,i); // to calculate decimal number
        ++i; //increment i by 1
        binaryNumber/=10;   
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}
