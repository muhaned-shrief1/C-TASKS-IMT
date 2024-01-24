
/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
int main()
{
    int number;   // Define Variable 

    printf("Enter a number: ");   //print Enter Number
    scanf("%d", &number);

        if (number == 0)        // To make Check of This Number 
             printf("You entered zero");   
        else if (number < 0)    
            printf("You entered a negative number.");    // if This Number Is Negative Will Print Negative Number
        else
            printf("You entered a positive number.");    // if This Number Is Positive Will Print Positive Number
    return 0;
}