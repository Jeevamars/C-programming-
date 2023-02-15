/*
	Name:jeeva 
	Date: 26/01/23 14:10
	Description: Pointer example program 
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	int *p,*q;
	p=&a;
	p=&b;
	p=&c;
	q=1;
	printf("Enter the value 1:");
	scanf("%d",&a);
	printf("\nEnter the value 2:");
	scanf("%d",&b);
	printf("\nEnter the value 3:");	
	scanf("%d",&c);
	printf("\n%d\n%d\n%d\n",*p,*p++,*p++);
	printf("Address of a:%d",&a);
		printf("\nAddress of b:%d",&b);
			printf("\nAddress of c:%d",&c);
				printf("\nAddress of pointer a :\n%d\n%d\n%d",p,p++,p++);	
					printf("\nAddress of pointer %d",&p);

printf("\nAddress of pointer %d",&q);								
						
}


