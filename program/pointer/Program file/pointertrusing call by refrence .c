/*
	Name:  Jeeva
	Date: 27/01/23 10:16
	Description: pointer using call by reference
*/
#include<stdio.h>
int fun(int *,int *);
int main()
{
	int rst,x=11,y=22;
	int *ptr,*ptr1;
	ptr=&x;
	ptr1=&y;
	//fun(&x,&y);
	rst=fun(&x,&y);			//call by reference
	printf("\n%d",rst);
}
int fun(int *a,int *b)
{
	int sum=0;
	sum= *a+*b;
	printf("\nHelloo");
	printf("\nADD:%d",sum);
	return sum;
}
