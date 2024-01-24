/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

/* Compare function declaration */
int compare(char * str1, char * str2);


int main()
{
    char str1[100], str2[100];
    int res;

    /* Input two strings from user */
    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);


    /* Call the compare function to compare strings */
    res = compare(str1, str2);

    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res < 0)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically greater than second.");
    }

    return 0;
}


/**
 * Compares two strings lexicographically. 
 */
int compare(char * str1, char * str2)
{
    while((*str1!='\0'&& *str2!='\0') && (*str1 == *str2))
		{ 
	     str1++; 
		 str2++; 
	     }

    return *str1 - *str2;
}