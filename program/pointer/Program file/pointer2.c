/*
	Name: jeeva 
	Date: 26/01/23 11:10
	Description:Pointer example  
*/
#include<stdio.h>
int main()
{
	int *p;
	int val=11;
	p=&val;
	printf("Value of variable var is:%d",val); 			// value of val
	printf("\n Value of variable var is:%d",*p);		// value of val- (val stored in the address of p- *p)
	printf("\n Address of variable var is:%p",&val);	//
	printf("\nAddress of variable var is:%p",p);
	printf("\nAddress of pointer p is:%p",&p);
}
