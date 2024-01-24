
/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to check even or odd number using bitwise operator
 */

#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num & 1)
    {
        printf("%d is odd.", num);
    }
    else
    {
        printf("%d is even.", num);
    }

    return 0;
}