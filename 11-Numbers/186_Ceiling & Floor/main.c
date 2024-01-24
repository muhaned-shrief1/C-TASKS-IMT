
/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
 
/* Function to get index of ceiling of x in arr[low..high] */
int ceilSearch(int arr[], int low, int high, int x)
{
     int i;
 
    /* If x is smaller than or equal to first element,then return the first element */
    if (x <= arr[low])
    return low;
 
   /* Otherwise, linearly search for ceil value */
   for (i = low; i < high; i++)
   {
       if (arr[i] == x)
          return i;
 
       /* if x lies between arr[i] and arr[i+1] including arr[i+1], then return arr[i+1] */
       if (arr[i] < x && arr[i + 1] >= x)
           return i + 1;
   }
 
   /* If we reach here then x is greater than the last element of the array,  return -1 in this case */
   return -1;
}
 
int main()
{
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x ;
	printf("plz enter number of element:");
	scanf("%d",&x);
    int index = ceilSearch(arr, 0, n-1, x);
    if (index == -1)
        printf("Ceiling of %d doesn't exist in array ", x);
    else
        printf("ceiling of %d is %d", x, arr[index]);
    return 0;
}