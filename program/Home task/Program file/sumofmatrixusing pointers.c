/*
	Name: jeeva 
	Date: 28/01/23 11:59
	Description:sum of array using pointers 
*/
#include<stdio.h>
int mat(int*,int*);
int main()
{
	int i,A[50],B[50];
	int *a,*b;
	printf("Enter the value of 1st matrix");
	for(i=0;i<4;i++)
	scanf("%d",&A[i]);
	printf("Enter the value of 1st matrix");
	for(i=0;i<4;i++)
	scanf("%d",&B[i]);
	a=A;
	b=B;
	mat(&A,&B);
}
int mat(int *x,int *y)
{
	
	printf("\n\t%d",(*x+*y));
	printf("\t%d",((*++x)+(*++y)));
		printf("\n\t%d",((*++x)+(*++y)));
			printf("\t%d",((*++x)+(*++y)));
}
