/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

 #include <stdio.h>
 
/* implementation maximum_difference function  */
int maximum_difference(int* ptr_array, int arr_size)
{
    /* define intger and assign subtraction of the value of first and second element  */
    int max_diff = ptr_array[1] - ptr_array[0];
    /* define two intger */
    int i, j;
    /* loop on elements of array */
    for (i = 0; i < arr_size; i++)
    {
        /* loop on elements of array */
        for (j = i + 1; j < arr_size; j++)
        {
            /* check the next element subtract the current element greater than maximum difference   */
            if (ptr_array[j] - ptr_array[i] > max_diff)
                /* ssign subtraction of the value of next element and current element  */
                max_diff = ptr_array[j] - ptr_array[i];
        }
    }
    
    return max_diff;
}
 
int main()
{
    /* define array of five elements */
    int array[5] = {0};
    /* define three intger */
    int n,i,result;
    /* message to user to Enter size of the array */
    printf("\n Enter size of the array: ");
    /* scan size of the array from user */
    scanf("%d", &n);
  /* message to user to Enter elements of the array */
    printf("\n Enter %d elements of an array: ", n);
    /* loop to scan all elements of array*/
    for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
    /* call maximum_difference function */
     result= maximum_difference(array, n);
    /* print the result  */
    printf("Maximum difference between 2 elements is %d",result );
    return 0;
}