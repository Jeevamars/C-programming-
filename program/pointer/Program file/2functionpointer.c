/*
	Name:jeeva 
	Date: 01/02/23 12:03
	Description:2 function pointer 
*/
#include<stdio.h>
int mul(int,int);
int sub(int,int);
int add(int,int);
int main()
{
	int a,b,rst;
	int (*funmul[3])(int,int)={&mul,&add,&sub};
	//funmul[0]=mul;
	//int (*funmul[1])(int,int)=add;
	//int (*funmul[2])(int,int)=sub;
	printf("Enter the values of and b");
	scanf("\n%d\n%d",&a,&b);
	rst=funmul[0](a,b);	
	printf("\nmul%d",rst);
	printf("\nadd%d",funmul[1](a,b));
	printf("\nsub%d",funmul[2](a,b));
}
int mul(int x,int y)
{
	return x*y;
}
int sub(int x,int y)
{
	return x-y;
}
int add(int x,int y)
{
	return x+y;
}


