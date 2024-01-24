/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


#include <stdio.h>


int main()
{
    /* define two array from 100 elements */
    char str[100], reverse[100];
   /* define and inialize pointer to array 1 */
      char *s = str;
  /* define and inialize pointer to array 2 */
    char *r = reverse;
    int len = 0;

    /* Input string from user */
    printf("Enter any string: ");
    scanf("%s",str);

    /* Find length of string */
    while(*(s++))
	{
		len++;
	}
		
    /* 
     * Store each character from end of original string 
     * to reverse string
     */
    s--;
    while(len >= 0)
    {
        *(r++) = *(--s);
        len--;
    }
 
    printf("\nOriginal string = %s\n", str);
    printf("Reverse string = %s", reverse);

    return 0;
}