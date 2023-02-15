// sum of two dimensional array
//created y jeeva
//14/01/2023
#include<stdio.h>
int main()
{
	int i,j,k[100][100],l[100][100],n,sum=0;
	printf("Enter the size of matrix:");
	scanf("%d",&n);
	printf("\nMatrix A");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&k[i][j]);
		}
	}
	printf("\nMatrix B");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&l[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		sum=(k[i][j]+l[i][j]);
	printf("\t%d",sum);
}
printf("\n");
}
}
