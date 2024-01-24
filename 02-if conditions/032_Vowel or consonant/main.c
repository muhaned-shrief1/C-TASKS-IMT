/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/



#include <stdio.h>
int main()
{
    char c ;
    int x, y;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

	/* check on the character is vowel or constant */
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') // to chek Alphabets 

        printf("%c is a vowel.", c);   // To print Vowel 
    else
        printf("%c is a consonant.", c);  //  To Print Constant 

  return 0;
}