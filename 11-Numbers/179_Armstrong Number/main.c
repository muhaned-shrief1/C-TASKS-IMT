/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>


int main()
{
    int number, originalNumber, remainder, result = 0, n = 0 ,i;   //to define variable 
     int power_num=1;        //to equal this variable by 1
    printf("Enter an integer: ");
    scanf("%d", &number);   // to take value from user and put it in variable number 

     originalNumber = number;
    
    while (originalNumber != 0)  // to check the Variable if Not Equal 0
    {
        originalNumber /= 10;   // to get lenght of numbers
        n++;                    // to increment n by 1
    }

    originalNumber = number;   
	
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
   for (i=0;i<n;i++)  // to make for loop of i 
    {
      power_num*=remainder;   //to make pointer of address of reminder 
    }

        result +=power_num ;  // to add variable by 1
		power_num=1;
        originalNumber /= 10;
    }

    if(result == number)  // to check if result equal number
        printf("%d is an Armstrong number.", number);
    else
        printf("%d is not an Armstrong number.", number);

    return 0;
}