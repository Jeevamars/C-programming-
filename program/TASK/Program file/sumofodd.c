#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j;
	float avg,sum=0;
	printf("Enter the count:");
	scanf("%d",&n);
	printf("Enter the odd numbers:");
	for(i=1;i<=n;i++)
	{
		j=2*i-1;
		printf("%d",j);
		sum=sum+j;
	}
	printf("\nThe sum of n odd numbers:%f",sum);
	avg=sum/n;
	printf("\nAverage:%f",avg);
}
