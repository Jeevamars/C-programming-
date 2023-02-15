#include<stdio.h>
int main()
{
	int a=10;
	int *p;
	int **c,*d;
	p=&a;
	c=&p;
	printf("\n%d",*p);
	printf("\n%d",*(*c));
	//printf("\n%d",*d);
	
}
