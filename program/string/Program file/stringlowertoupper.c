/*
	Name: jeeva 
	Date: 20/01/23 20:15
	Description:string lower to uppercase
*/
#include<stdio.h>
int main()
{
	int i;
	char alph[50],val1;
	printf("Enter the string:");
	gets(alph);
	for(i=0;alph[i];i++)
	{
		if((alph[i]>=97)&&(alph[i]<=122))
		{
			val1=alph[i]-32;
			printf("%c",val1);
		}
		else
		{
			printf("%c",alph[i]);
		}

}

}
