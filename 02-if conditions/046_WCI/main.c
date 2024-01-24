/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
float  power(float n, float r)
 {
   float  p = 1.0;
  int c;
   for (c = 1; c <= r; c++) 
      p = p*n;
 
   return p;   
}
int main()
{
// v is wind speed in mph, t is temperature in Fahrenheit
// and wci is wind chill index
double v = 0.0, t = 0.0, wci = 0.0;
// read and store v from user inputs
printf("Enter wind speed in mph (-1 to stop): ");
scanf("%lf", &v);

// read and store t from user inputs
printf("Enter temperature in Fahrenheit: ");
scanf("%lf", &t);
// if (0 <= v <= 4)
if((v >= 0.0) && (v <=4.0))
wci = t;
// if (v >= 45)
else if (v >= 45)
wci = ((1.6*t) - 55);
// others...
else
wci = 91.4 + ((91.4 - t)*((0.0203*v) - (0.304*(power(v,0.5))) - 0.474));
   
// print one of the result
printf("\nFor wind speed = %.2f and temperature = %.2f\n",v, t);

printf("Wind Chill Index is: %.2f\n", wci);
printf("\n");
}

