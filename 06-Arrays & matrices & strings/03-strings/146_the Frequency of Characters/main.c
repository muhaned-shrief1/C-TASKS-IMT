/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

int main()
{
   char str[1000], ch;
   int i, 
   frequency = 0;  //to store the repeats  number of characters

   printf("Enter a string: ");
   gets(str);

   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch);

   for(i = 0; str[i] != '\0'; ++i)     //loop till the end of string
   {
       if(ch == str[i])   //to check the equality 
           ++frequency;   
   }

   printf("Frequency of %c = %d", ch, frequency);

   return 0;
}