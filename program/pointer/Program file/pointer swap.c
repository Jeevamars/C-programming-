/*
	Name: 
	Copyright: 
	Author: 
	Date: 26/01/23 14:29
	Description: 
*/
#include<stdio.h>
int main()
{
		int x,y,temp;
		int *a,*b,*c;
		a=&x;
		b=&y;
		temp=&c;
		printf("\nEnter the value of x:");
		scanf("%d",&x);
		printf("\nEnter the value of y:");
		scanf("%d",&y);
		printf("\nBefore swap x=%d   y=%d",*a,*b);
		*c=*a;
		*a=*b;
		*b=*c;
		printf("\n\nAfter swap x=%d   y=%d",*a,*b);


}

