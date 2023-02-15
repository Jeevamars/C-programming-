/*
	Name: jeeva
	Date: 20/01/23 11:49
	Description:Two string print 
*/
#include<stdio.h>
int main()
{
	int i,n=50;
	char name[50],name1[50];
	printf("enter the string:");
	for(i=0;name[i-1]!=10;i++)
	{
	scanf("%c",&name[i]);
	}
	name[i-1]='\0';
	puts(name);
	gets(name1);
	puts(name1);
}
