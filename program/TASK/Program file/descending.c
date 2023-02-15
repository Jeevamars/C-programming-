//descending order in array
//created by jeeva
//11-01-2023
#include<stdio.h>
int main()
{
	int num[4],i,tem=0,j;
	printf("Enter the number:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<4;i++)
	{	
		for(j=i+1;j<4;j++)
			{
				if(num[i]<num[j])
				{
				tem=num[i];
				num[i]=num[j];
				num[j]=tem;
			}
		}
	}
		for(i=0;i<4;i++)
		printf("%d\n",num[i]);
}





