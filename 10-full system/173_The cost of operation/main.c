/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
 
 void main()
{
float p, cost, p1, cost1;
for (p = 0; p <= 10; p+=0.1)
{
cost = 40 - (8 * p) + (p * p);
if(p == 0)
{
cost1 = cost;
continue;
}
if (cost < cost1)
{
cost1 = cost;
p1 = p;
}
}
printf("\nMINIMUM COST = %.2f AT p = %.1f\n",cost1, p1);
}