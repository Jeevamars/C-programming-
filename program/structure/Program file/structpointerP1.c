/*
	Name: jeeva
	Date: 04/02/23 10:04
	Description: Structure pointer program 1
*/
#include<stdio.h>
struct point
{
	int a;
	char b;
	float c;
};

int main()
{
	struct point p1={555,'J',122.5};
	struct point *p2=&p1;
	printf("%d\n%c\n%f",p2->a,p2->b,p2->c);
	printf("\n%d\n%c\n%f",(*p2).a,(*p2).b,(*p2).c);
}
