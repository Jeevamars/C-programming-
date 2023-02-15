/*
	Name: jeeva 
	Date: 20/01/23 19:37
	Description:string reverse 
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	char rev[50];
	printf("Enter the string");
	gets(rev);
	for(i=0;rev[i];i++);
printf("\nReverse string:");
for(i=i-1;i>=0;i--)
printf(" %c",rev[i]);
}

