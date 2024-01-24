/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

/*prototypes of two functions  */
void printArray(int arr[]);
void rotateByOne(int arr[]);


int main()
{
    /* define two intger */
    int i, N;
    /*define array of 10 elements*/
    int arr[10];

    /*message to enter the value of 10 elements*/
    printf("Enter 10 elements array: ");

    /* for loop to take the value of 10 elements */
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* to take the number of times to right rotate */
    printf("Enter number of times to right rotate: ");
    scanf("%d", &N);

   

    /* Print array before rotation */
    printf("Array before rotation:");
    printArray(arr);

    /* Rotate array n times */
    for(i=1; i<=N; i++)
    {
        rotateByOne(arr);
    }

    /* Print array after rotation */
    printf("\n\nArray after rotation\n");
    printArray(arr);

    return 0;
}


void rotateByOne(int arr[])
{
    int i, last;

    /* Store last element of array */
    last = arr[10 - 1];

    for(i=10-1; i>0; i--)
    {
        /* Move each array element to its right */
        arr[i] = arr[i - 1];
    }

    /* Copy last element of array to first */
    arr[0] = last;
}


/**
 * Print the given array
 */
void printArray(int arr[])
{
    int i;

    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
}
