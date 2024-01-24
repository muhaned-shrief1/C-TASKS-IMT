/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
int main()
{
    /* define array from 50 elements */	
    int array[50];
    /* define pointer */
    int *ptr;
    /* define five intger */	
    int i, j, k, size, n;
    /* message to ask user enter size of the array */
    printf("\n Enter size of the array: ");
    /* scan size of the array from user */
    scanf("%d", &n);
    /* message to ask user enter elements of an array */
    printf("\n Enter %d elements of an array: ", n);
   /* loop on elements of array */
    for (i = 0; i < n; i++)
  /* scan the element of array */
    scanf("%d", &array[i]);
    size = n;
   /* initialize ptr to array */
    ptr = array;
   /* loop on elements of array */
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }
            /* check the current element equal the next element  */
            else if (*(ptr + i) == *(ptr + j))
            {
               /* assign j in k to store the index of duplication  */
                k = j;
                /* decrement size */
                size--;
                while (k < size)
                {
                    *(ptr + k) = *(ptr + k + 1);
                    k++;
                }
                j = 0;
            }
        }
    }
    printf("\n The array after removing duplicates is: ");
    for (i = 0; i < size; i++)
    {
        printf(" %d", array[i]);
    }
    return 0;
}