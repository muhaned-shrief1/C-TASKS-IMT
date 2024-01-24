/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>


int main()
{
    /* define two array from 100 elements */
    char text1[100], text2[100];
    /* define and inialize pointer to array 1 */
    char * str1 = text1;
   /* define and inialize pointer to array 2 */
    char * str2 = text2;
   /* define one intger */
    int i;	
    
    /* Input message to take string from user */
    printf("Enter any string: ");
    /* scan string from user */
    scanf("%s",text1);
    
    /* Copy text1 to text2 character by character */
    for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);

    return 0;
}