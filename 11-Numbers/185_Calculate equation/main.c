/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
 
#define MAX 10
 void main()
{
int m, x, binom;
printf(" m x");
for (m = 0; m <= 10 ; ++m)
printf("%4d", m);
printf("\n-------------------------------------------\n");
m = 0;
do
{
printf("%2d ", m);
x = 0; binom = 1;
while (x <= m)
{
if(m == 0 || x == 0)
printf("%4d", binom);
else
{
binom = binom * (m - x + 1)/x;
printf("%4d", binom);
}
x ++;
}
printf("\n");
m ++;
}
while (m <= MAX);
printf("---------------------------------------------\n");
}