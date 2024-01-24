/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
/*main function*/
int main()
{
    char s1[100], s2[100], i; 

    printf("Enter string s1: ");
    scanf("%s",s1);
/*loop to take string*/
    for(i = 0; s1[i] != '\0'; ++i)
    {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);

    return 0;
}