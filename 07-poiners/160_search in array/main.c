/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>


/* Function declaration to input, add and print matrix */
void matrixInput(int mat[3][3]);
void matrixPrint(int mat[3][3]);
void matrixAdd(int mat1[3][3], int mat2[3][3], int res[3][3]);


int main()
{
    int mat1[3][3], mat2[3][3], res[3][3];

    // Input elements in first matrix
    printf("Enter elements in first matrix of size 3x3: \n");
    matrixInput(mat1);

    // Input element in second matrix
    printf("\nEnter elemetns in second matrix of size 3x3: \n" );
    matrixInput(mat2);

    // Finc sum of both matrices and print result
    matrixAdd(mat1, mat2, res);

    printf("\nSum of first and second matrix: \n");
    matrixPrint(res);
    

    return 0;
}



/**
 * Function to read input from user and store in matrix.
 * 
 * @mat     Two dimensional integer array to store input.
 */
void matrixInput(int mat[3][3])
{
    int i, j;


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // (*(mat + i) + j) is equal to &mat[i][j]
            scanf("%d", (*(mat + i) + j));
        }
    }
}



/**
 * Function to print elements of matrix on console.
 * 
 * @mat     Two dimensional integer array to print.
 */
void matrixPrint(int mat[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // *(*(mat + i) + j) is equal to mat[i][j]
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}



/**
 * Function to add two matrices and store their result in given res
 * matrix.
 * 
 * @mat1    First matrix to add.
 * @mat2    Second matrix to add.
 * @res     Resultant matrix to store sum of mat1 and mat2.
 */
void matrixAdd(int mat1[3][3], int mat2[3][3], int res[3][3])
{
    int i, j;


    // Iterate over each matrix elements 
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // res[i][j] = mat1[i][j] + mat2[i][j]
            *(*(res + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
}