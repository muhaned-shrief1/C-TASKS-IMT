/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
int main()
{
    char s[1000], i;

    printf("Enter a string: ");
    scanf("%s", s);
/* loop to get the lenght*/
    for(i = 0; s[i] != '\0'; ++i);

    printf("Length of string: %d", i);
    return 0;
}