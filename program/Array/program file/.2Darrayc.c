//Two dimensinal array
//created by jeeva
//12-1-2023
#include<stdio.h>
int main()
{
int n,i[100][100],k,l;
printf("Enter the matrix");
scanf("%d",&n);
for(k=0;k<n;k++)
{
	for(l=0;l<n;l++)
	{
	scanf("%d",&i[k][l]);
	}
}
for(k=0;k<n;k++)
{
	for(l=0;l<n;l++)
	{
	printf("\t%d",i[k][l]);
}
printf("\n");
}
}
