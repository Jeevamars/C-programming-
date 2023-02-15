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
	int val=0,a,b,a1,a2,a3,b1,b2,b3;
	a=*x;
	a1=*++x;
	a2=*++x;
	a3=*++x;
	b=*y;
	b1=*++y;
	b2=*++y;
	b3=*++y;
	printf("\n%d",((a*b)+(a1*b2)));
	printf("\n\t%d",((a*b1)+(a1*b3)));
	printf("\n%d",((a2*b)+(a3*b2)));
	printf("\n\t%d",((a2*b1)+(a3*b3)));			
}
