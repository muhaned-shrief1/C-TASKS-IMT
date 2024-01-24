/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>

/* define the main function */
int main()
{
      /* Define three integers */	
      int firstNumber, secondNumber, tempVariable;

      /* Ask the user to enter first number */
      printf("Enter first number: ");

      /* Scan the value and save it in firstNumber */
      scanf("%d", &firstNumber);

      /* Ask the user to enter second number */
      printf("Enter second number: ");

     /* Scan the value and save it in secondNumber */
      scanf("%d",&secondNumber);

      // Value of firstNumber is assigned to tempVariable
      tempVariable = firstNumber;

      // Value of secondNumber is assigned to firstNumber
      firstNumber = secondNumber;

      // Value of tempVariable (which contains the initial value of firstNumber) is assigned to secondNumber
      secondNumber = tempVariable;
      printf("\n ......After swapping...... ");
      printf("\nfirstNumber = %d\n", firstNumber);
      printf("secondNumber = %d", secondNumber);

      return 0;
}