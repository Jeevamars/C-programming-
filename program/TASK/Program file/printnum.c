//print 1to 10
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("Enter the count:");
	scanf("%d",&n);
	/*for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
	}*/
	for(i=n;i>=0;i--)
	{
	printf("\n%d",i);	
	}

}

