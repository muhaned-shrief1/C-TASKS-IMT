/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
int main()
{
    float firstNumber, secondNumber, result;
    printf("Enter the first number: ");

    // Stores the first floating number in variable firstNumber  
    scanf("%f", &firstNumber);  

  printf("Enter the second number: ");

// Stores the second floating number in variable secondNumber  
   scanf("%f", &secondNumber); 

    // Performs multiplication and stores the result in variable result OfTwoNumbers
    result = firstNumber * secondNumber;  

    // Result up to 2 decimal point is displayed using %.2f
    printf("result = %.2f", result);
    
    return 0;
}