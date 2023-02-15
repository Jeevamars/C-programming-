#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a,sum;
	sum=0;
	printf("Enter the initial:");
	scanf("%d",&a);
	printf("count:");
	scanf("%d",&n);
	printf("The even numbers are:");
	for(i=a;i<=n;i++)
	{
		
		if((i%2==0)&&(i<=n))
		{
		printf("\n%d",i);
		sum=sum+i;
	}
	}
	printf("\nSum=%d",sum);
}
