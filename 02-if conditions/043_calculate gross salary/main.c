/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
/* function main*/
int main()
{
    float basic, gross, da, hra; // Define Floating Variables

    /* Input basic salary of employee */
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic); // to Take Value From User And Put it in Variable basic


    /* Calculate D.A and H.R.A according to specified conditions */
    if(basic <= 10000)  //to Check if variable basic smaller than Or equal 100 will be Exquet The next Order***************
    {
        da  = basic * 0.8;  // put the Result from This Operation in variable da 
        hra = basic * 0.2;   // put the Result from This Operation in variable hra
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    /* Calculate gross salary */
    gross = basic + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}