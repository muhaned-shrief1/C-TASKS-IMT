/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/



// Performs addition, subtraction, multiplication or division depending the input from user

# include <stdio.h>

int main() {

    char operator;  //********Define Variable As Char************
    double firstNumber,secondNumber; //********Define This Variable AS double To Put Init Float Number*********

    printf("Enter an operator (+, -, *,/): ");  // To Display The Operation 
    scanf("%c", &operator);  // To Chose One Of Operation 

    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);

    switch(operator)  // To Make Switch on operation Accroding The User 
    {
        case '+':  //***if User Chose (+) This Case Will Exquet
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
            break;

        case '-':   //***if User Chose (-) This Case Will Exquet
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;

        case '*':    //***if User Chose (*) This Case Will Exquet
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;

        case '/':   //***if User Chose (/) This Case Will Exquet
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
}