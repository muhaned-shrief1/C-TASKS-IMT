/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


#include <stdio.h>


int main()
{
    int source_arr[100];
    int	dest_arr[100];
    int size, i;

    int *source_ptr = source_arr;   // Pointer to source_arr
    int *dest_ptr   = dest_arr;     // Pointer to dest_arr

    int *end_ptr;


    /*
     * Input size and elements in source array
     */
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array:\n ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (source_ptr+i));
    }


    // Pointer to last element of source_arr
    end_ptr = &source_arr[size - 1];


   
   



    /*
     * Run loop till source_ptr exists in source_arr
     * memory range.
     */
    for(i=0;*source_ptr <= *end_ptr;i++)
    {
        dest_ptr[i] = source_ptr[i];
    }


    /* Print  destination array after copying */
    printf("\n destination array after copying: ");
    for (i = 0; i < size; i++)
    {
        printf("%d, ", dest_ptr [i]);
    }



    return 0;
}