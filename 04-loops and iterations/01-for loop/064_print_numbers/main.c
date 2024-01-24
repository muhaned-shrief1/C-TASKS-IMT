/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

int main()
{
    int rows, cols, i, j, k;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    k = 1;
     /* loop to print rows*/
    for(i=1; i<=rows; i++)
    {
        /* loop to print columns*/
        for(j=1; j<=cols; j++, k++)
        {
            printf("%-3d", k);
        }

        printf("\n");
    }

    return 0;
}