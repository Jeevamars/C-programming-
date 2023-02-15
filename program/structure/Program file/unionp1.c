/*
	Name: jeeva 
	Date: 02/02/23 14:57
	Description:Union program1 
*/

#include<stdio.h>
union manfree									// only store the last input of the program because in union stored output willbe replaced 			
{
	int a;
	float b;
	char c[50];
}man;
int main()
{
	
	scanf("\n%d",&man.a);
	scanf("\n%f",&man.b);
	scanf("\n%s",&man.c);
	printf("\n%d",man.a);
	printf("\n%f",man.b);
	printf("\n%s",man.c);	
	printf("\n%d",sizeof (man));
}
