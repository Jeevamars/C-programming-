#include<stdio.h>
#include<conio.h>
void main()
{
	int i,val,num,n,arm,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	val=n;
	for(i=0;i<n;n=n/10)
	{
		num=n%10;
		arm=num*num*num;
		sum=sum+arm;
	}
printf("\n%d",sum);

if(sum==val)
printf("Armstrong number");
else
printf("Not a armstorng number");
}
