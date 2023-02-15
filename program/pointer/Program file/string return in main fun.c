/*
	Name: jeeva 
	Date: 01/02/23 14:09
	Description: Function to string and print argument  pass 
*/
#include<stdio.h>
char *string();
char str[50];
int main()
{
	int i;
	char *ret;
ret=string();
for(i=0;i<5;i++)
printf("%c",ret[i]);
//printf("%c",*ret);
}
char *string()
{
	printf("Enter the string:");
	gets(str);
	return (str);
}


 

