/*
	Name: Jeeva 
	Date: 21/01/23 12:20
	Description: Index value of a given letter in string and cou
	nt 
*/
#include<stdio.h>
int main()
{
	int i,val=0;
	char index[50],let;
	printf("\nEnter the string:");
	gets(index);
	printf("Enter the character to know index value:");
	scanf(" %c",&let);
	
	for(i=0;i<index[i];i++)
	{
			if(let==index[i])
			{
			val++;
		printf("\nindex position:%d",i);
	}
	}
	printf("\nCount: %d",val);
}


