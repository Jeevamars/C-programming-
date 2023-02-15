/*
	Name: jeeva 
	Date: 01/02/23 10:29
	Description: Function pointer 
*/
#include<stdio.h>
int funptr(int, int);
int main()
{	
	printf("\n%d",sizeof(funptr));
		printf("\n%d",&funptr);
			printf("\n%d",sizeof(&funptr));
		funptr(5,6);
	}	
	int funptr(int a, int b)
{	
 	int a1=10,a2=11,a3=12,a4=13,a5=14,a6=15,val2;
	int val;
	val=a+b;
	val2=a1+a2+a3+a4+a5+a6;
	printf("\nfunction addition%d",val2);
	printf("\naddition:%d",val);
}
