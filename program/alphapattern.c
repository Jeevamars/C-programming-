#include<stdio.h>
int main()
{
	int i,j,n,alph=65;
	printf("Enter the value:");
	scanf("%d",&n);
	for(i=65;i<=n;i++)
	{
		for(j=65;j<=i;j++)
		{
		printf("%c",alph);
		alph++;
		}
		printf("\n");
	}
}
