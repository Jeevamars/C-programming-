/*
	Name: jeeva 
	Date: 04/02/23 14:43
	Description:Nested structure 
*/
#include<stdio.h>
#include<conio.h>
struct nest1
{
	int a,b;
	char c;
	float d;
struct nest2
{
	int mm,nn;
	char z;
	float xx;
}man;
struct nest3
{
	int lk;
	}ma;	
}man1;
int main()
{
	printf("%d",sizeof(man1));
	printf("\n%d",sizeof(man1.ma.lk));
		printf("\n%d",sizeof(man1.man.mm));
		printf("\n%d",sizeof(man1.man.z));
}





