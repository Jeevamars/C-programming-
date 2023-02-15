#include<stdio.h>
#include<conio.h>
void main()
{
	int r,i,num,pal=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=num;i>0;i=i/10)
	{
		r=i%10;
		pal=pal*10+r;
	}
		if(num==pal)
		printf("its a palindrome %d",pal);
		else
		printf("its not a palindrome");
}
