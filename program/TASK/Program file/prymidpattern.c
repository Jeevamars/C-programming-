#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,j;
	printf("Enter the value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}