#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,v1,num=0;
	printf("Enter the numbers");
	scanf("%d",&n);
	name:
	for(i=1;i<=n;i++)
	{
		printf("The number :");
		scanf("%d",&v1);
		if(num<v1)
		{
			num=v1;		
		}
		if(i>n)
	goto name;
	printf("the greatest number is %d",num);
		}
	
}
