/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
int main(){
	   /* define two intger */
		int r, c;
	   /*define three two dimention array  */
	  int a[100][100], b[100][100], sum[100][100];
	  /*define two intger*/
	  int i, j;

		/* message to take the number of rows*/
		printf("Enter number of rows (between 1 and 100): ");
		/* scan from user the number of rows*/
		scanf("%d", &r);
		/* message to take the number of columns*/
		printf("Enter number of columns (between 1 and 100): ");
		and 100): ");
		/* scan from user the number of columns*/
		scanf("%d", &c);

		printf("\nEnter elements of 1st matrix:\n");

		/*loop to take the elements of first matrix */
		for(i=0; i<r; ++i)
			for(j=0; j<c; ++j)
			{
				printf("Enter element a%d%d: ",i+1,j+1);
				scanf("%d",&a[i][j]);
			}

		printf("Enter elements of 2nd matrix:\n");
		/*loop to take the elements of second matrix */
		for(i=0; i<r; ++i)
			for(j=0; j<c; ++j)
			{
				printf("Enter element a%d%d: ",i+1, j+1);
				scanf("%d", &b[i][j]);
			}

		// Adding Two matrices

		for(i=0;i<r;++i)
			for(j=0;j<c;++j)
			{
				sum[i][j]=a[i][j]+b[i][j];
			}

		// Displaying the result
		printf("\nSum of two matrix is: \n\n");

		for(i=0;i<r;++i)
			for(j=0;j<c;++j)
			{

				printf("%d   ",sum[i][j]);

                 /*check j equal column -1  */
				if(j==c-1)
				{
					/* print two new lines*/
					printf("\n\n");
				}
			}
		
		return 0;
}