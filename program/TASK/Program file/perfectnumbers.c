#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0,val;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		val=(n%i);
		if(val==0)
		{
		sum=sum+i;
		}
	}
	printf("\nsum=%d",sum);
	if(sum==n)
	{
	printf("\nIt is a perfect number");
	}
	else
	printf("\nIts not a perfect number");
}
