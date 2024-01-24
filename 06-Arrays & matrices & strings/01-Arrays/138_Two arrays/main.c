/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include<stdio.h>
void main (void)
{
	int i ;
	char array[20]={1,3,5,7,9,11,13,15,17,19} ;
	char array2[10]={2,4,6,8,10,12,14,16,18,20} ;
	for(i=9;i>=0;i--)
	{
		array[i*2]=array[i] ;
		array[(i*2)+1]=array2[i] ;
	}
	for(i=0;i<20;i++)
	{
		printf("%d ",array[i]);
	}	
}


#include<stdio.h>

void main(void)
{
	int x;
	int y;
	printf("plz enter the first variable ");
	scanf("%d",&x);
	printf("plz enter the second variable ");
	scanf("%d",&y);
	printf("before swap\n x=%d \n y=%d \n");
	swapfun(&x,&y);
	printf("after swap\n x=%d \n y=%d \n");	
}
void swapfun(int*ptrtox, int*ptrtoy )
{
	int temp;
	temp=*ptrtox;
	*ptrtox=*ptrtoy;
	*ptrtoy=temp;
	
}



void main(void)
{
	int a[4]={1,2,6,4};
	fun(a);
}


fun(int *p)
{
	*(p+2)=6;// p[2]=6;
}

void main(void)
{
int a[5]={4,1,7,2,3};
int*ptr;
ptr=GetMaxMin(a,5);
printf("max=%d\n min=%d",ptr[0],ptr[1]);
}
int* GetMaxMin(int*ptrtoarray,int sizetoarray)
{
	static int arr[2];
	arr[0]=ptrtoarray[0];
	arr[1]=ptrtoarray[0];
	for(int i=0;i<sizetoarray;i++)
	{
		if(ptrtoarray[i]>arr[0])
		{
			arr[0]=ptrtoarray[i];
		}	
		if(ptrtoarray[i]<arr[1])
		{
			arr[1]=ptrtoarray[i];
		}	
	}
	return arr;
}








































