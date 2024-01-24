/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
int main()
{
    /*define two intger number*/	
    long int number;
    int count = 0;
    /* to scan number from user*/
    printf("Enter the number: ");
    scanf("%d", &number);

    /* inside the loop until the number is equal zero*/
    while(number != 0)
    {
        // number = number/10
        number /= 10;
       /*increament count  */
        count++;
    }

    /* print the number of digits */
    printf("Number of digits: %d", count);
}