/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to insert an element in array at specified position
 */

#include <stdio.h>
#define MAX_SIZE 100
/*
int main()
{
    int arr[MAX_SIZE];
    int i, size, num, pos;

    /* Input size of the array */
   /* printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array *//*
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Input new element and position to insert *//*
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);

    /* If position of element is not valid *//*
    if(pos > size+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        /* Make room for new array element by shifting to right *//*
        for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        
        /* Insert new element at given position and increment size *//*
        arr[pos-1] = num;
        size++; 

        /* Print array after insert operation *//*
        printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
*/

void main(void)
{
	int sizeofarray;
	int array[20];
	int value;
	int index;
	printf("please enter size of array");
	scanf("%d",&sizeofarray);
	printf("please enter the elements of array");
	for(int i=0 ; i<sizeofarray ; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("please enter the value ");
	scanf("%d",&value);
	printf("please enter the index ");
	scanf("%d",&index);
	/*j=4 , index=3*/
	/*j=2*/
	for(int j=sizeofarray-1; j>index-2 ; j--)
	{
		array[j+1]=array[j];
	}
	array[index-1]=value;
}
























