/*
	Name: jeeva 
	Date: 20/01/23 20:30
	Description:string upper to lowercase
*/
#include<stdio.h>
int main()
{
	int i;
	char alph[50],val;
	printf("Enter the string:");
	gets(alph);
	for(i=0;alph[i];i++)
	{
		if((alph[i]>=65)&&(alph[i]<=91))
		{
			val=alph[i]+32;
		printf("%c",val);
		}
		else
		{
			printf("%c",alph[i]);
		}
	}

}




