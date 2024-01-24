/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

int main()
{
    char text[100]; /* Declares a string of size 100 */
    char * str = text; /* Declare pointer that points to text */
    int count = 0;

    /* Input string from user */
    printf("Enter any string: ");
    scanf("%s",text);

    /* Iterate though last element of the string */
    while(*(str)!= '\0') 
	{
		count++;
		str++;
	}	
    printf("Length of '%s' = %d", text, count);

    return 0;
}