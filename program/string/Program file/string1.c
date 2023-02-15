
/*
	Name: jeeva 
	Date: 20/01/23 10:39
	Description:String introduction 
*/
#include<stdio.h>
int main()
{
	char hello[10]={'a','b','c','d','\0'};
	char jee[50];
	printf("Enter the array");
	printf("\n%s",hello);
	printf("\nEnter the string:");
	gets(jee);
	puts(jee);
	hello[3]=getchar();
	//putchar(hello[3]);
	puts(hello);
	hello[4]=getchar();
	puts(hello);
}
