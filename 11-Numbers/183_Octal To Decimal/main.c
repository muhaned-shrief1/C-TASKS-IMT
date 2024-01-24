/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
int  power(int n, int r);
long long convertOctalToDecimal(int octalNumber);
int main()
{
    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    printf("%d in octal = %lld in decimal", octalNumber, convertOctalToDecimal(octalNumber));

    return 0;
}
/* function for convert octal to decimal*/
long long convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * power(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}
int  power(int n, int r)
 {
   int c, p = 1;
 
   for (c = 1; c <= r; c++) 
      p = p*n;
 
   return p;   
}