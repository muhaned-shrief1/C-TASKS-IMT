/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


#include <stdio.h>
int main()
{
// an array of double to store student's score
double studentscore[50];
// a 2D array of string to store student's name
char studentname[50][50];
double studentavg = 0.0, sumscore = 0.0, averagescore = 0.0,
highestscore =0.0;
// index and terminal variables
int i = 0, stop = 0, k = 0;
// read and store student name and score
do
{
printf("Enter student name: ");
// null terminated string, scanf_s() only accept 1 string
// can try gets()/gets_s()
scanf("%s", &studentname[i]);
printf("Enter student score: ");
scanf("%lf", &studentscore[i]);
// increment the array index
i++;
// continue for next data?
printf("More data? -1 to stop, others to continue: ");
scanf("%d", &stop);
} while(stop != -1);
// some cosmetic...
printf("\n=================REPORT====================\n");
printf("Student Name\tScore\n");
printf("------------\t-----\n");
// set initial value of the highest score to the 1st array element
// and then compare 1 by 1 in the for loop...
highestscore = studentscore[0];
// the i index less 1, coz we increment after storing it
// in the do-while loop...
for(k=0;k<=i-1;k++)
{
// print all the student names and their respective scores
printf("%s\t\t%.2f\n",studentname[k],studentscore[k]);
// summing up all the score for average calculation
sumscore = sumscore + studentscore[k];
// determining the highest score
if(highestscore < studentscore[k])
highestscore = studentscore[k];
}
// calculate class average score
printf("\nThe number of student is %d\n",i);
averagescore = sumscore / i;
printf("The average score for this class is %.2f\n", averagescore);
// some cosmetic formatting...
printf("\n================================================\n");
printf("Below The Average Students! Work Harder!\n");
printf("================================================\n");
printf("\nStudent Name\tScore\n");
printf("------------\t-----\n");
// list down all the below average students
for(k=0;k<=i-1;k++)
{
if(studentscore[k] < averagescore)
printf("%s\t\t%.2f\n", studentname[k], studentscore[k]);
}
// some cosmetic formatting...
printf("\n================================================\n");
printf("Top Scorer Student! Congratulation!\n");
printf("================================================\n");
printf("\nStudent Name\tScore\n");
printf("------------\t-----\n");
// list down all the highest mark students
for(k=0;k<=i-1;k++)
{
if(studentscore[k] == highestscore)
printf("%s\t\t%.2f\n", studentname[k], studentscore[k]);}
return 0;
}