#include<stdio.h>
int mul(int,int);
int main()
{
	int rst=0,a,b;
	int(*funmul)(int,int)=mul;
	printf("Enter the values of and b");
	scanf("\n%d\n%d",&a,&b);
	rst=funmul(a,b);
	printf("\n%d",rst);	
}
int funmul(int x,int y)
{
	printf("\nMultiplication:%d",x*y);
	return x*y;
}

