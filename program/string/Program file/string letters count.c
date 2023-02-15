/*
	Name: jeeva 
	Date: 20/01/23 14:23
	Description:letter count in string 
*/
#include<stdio.h>
int main()
{
	int i;
	char count[100],count1[100];
	printf("Enter the character:");
	for(i=0;count[i-1]!=10;i++)
	{
		scanf("%c",&count[i]);
	}
	count[i-1]='\0';
	puts(count);
	printf("count %d",i-1);
	
}

