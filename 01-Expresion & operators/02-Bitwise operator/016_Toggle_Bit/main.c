/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to clear the nth bit of a number
 */

#include <stdio.h>

int main()
{
    int num, n, newNum;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Input bit number you want to clear */
    printf("Enter nth bit to clear (0-31): ");
    scanf("%d", &n);

    /*
     * Left shifts 1 to n times
     * finally perform bitwise XOR with num and result of above
     */
    newNum = num ^ (1 << n);

    printf("Bit toggled successfully.\n\n");
    printf("Number before toggle %d bit: %d (in decimal)\n", n, num);
    printf("Number after toggle %d bit: %d (in decimal)\n", n, newNum);

    return 0;
}