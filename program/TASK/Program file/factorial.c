#include<stdio.h>
#include<conio.h>
void main()
{
	int i,f=1,num;
	printf("Factorial:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{	
	f=f*i;
	 printf("%d\n",f);
}
}
