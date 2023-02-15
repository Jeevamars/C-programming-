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
	int rst=0,a,b;
	int (*funmul[3])(int,int)={mul,add,sub};    //function argument declaration to pointer in different index 
	funmul[0]=mul;								//function 
	funmul[1]=add;
	funmul[2]=sub;
	printf("Enter the values of and b");
	scanf("\n%d\n%d",&a,&b);	
	printf("\nmul%d",funmul[0](a,b));
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


