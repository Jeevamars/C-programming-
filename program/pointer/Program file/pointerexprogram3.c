/*
	Name: jeeva
	Date: 26/01/23 11:38
	Description: pointer example program 2
*/
#include<stdio.h>
int main()
{
	int add,x=11,y=22,z=33,sum;
	int *a,*b,*c;
	a=&x;
	b=&y;
	c=&z;
	printf("Value of x:%d",*a);	
		printf("\nValue of y:%d",*b);	
			printf("\nValue of z:%d",*c);
			sum=*a+*b;
			printf("\nSum:%d",sum);
			if(sum==*c)
			printf("\n***Happy republic day***");
			add=*a+*b+*c;
			printf("\nADDITION:%d",add);
			/**c=a-b;
			printf("%d",a);
			printf("\nAddress of a:%d",*c);*/
				a--;
				printf("\n%d",*a);
				c=c+2;
				printf("\n%d",*c);
}
