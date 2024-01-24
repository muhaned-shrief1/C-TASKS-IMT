/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
 
int getMedian(int array1[], int array2[], int n)
{
    int i = 0;  /* Current index of i/p array array1[] */
    int j = 0; /* Current index of i/p array array2[] */
    int count;
    int m1 = -1, m2 = -1;
 
    for (count = 0; count <= n; count++)
    {
        if (i == n)
        {
            m1 = m2;
            m2 = array2[0];
            break;
        }
        else if (j == n)
        {
            m1 = m2;
            m2 = array1[0];
            break;
        }
        if (array1[i] < array2[j])
        {
            m1 = m2;  /* Store the prev median */
            m2 = array1[i];
            i++;
        }
        else
        {
            m1 = m2;  /* Store the prev median */
            m2 = array2[j];
            j++;
        }
    }
    return (m1 + m2)/2;
}
 
int main()
{
    int array1[100] ;
    int array2[100];
    int i,j;
    int n1; 
    int n2;
	 printf("enter size of array_1: ");
	 scanf("%d",&n1);
	 printf("enter elements of array_1:\n");
	for(i=0;i<n1;i++)		
	{
		printf("enter element_%d:",i+1);
		scanf("%d",&array1[i]);
	} 
	 printf("enter size of array_2: ");
	 scanf("%d",&n2);
	 printf("enter elements of array_2:\n ");
	 for(i=0;i<n2;i++)
	 {
		 printf("enter element_%d:",i+1);
		  scanf("%d",&array2[i]);
	 }
    if (n1 == n2)
        printf("Median is %d", getMedian(array1, array2, n1));
    else
        printf("not possible to find out");
    return 0;
}