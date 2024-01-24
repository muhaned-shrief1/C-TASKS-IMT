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
    float length, width, perimeter;

    /*
     * Input length and width of rectangle from user
     */
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    /* Calculate perimeter of rectangle */
    perimeter = 2 * (length + width);

    /* Print perimeter of rectangle */
    printf("Perimeter of rectangle = %f units ", perimeter);

    return 0;
}