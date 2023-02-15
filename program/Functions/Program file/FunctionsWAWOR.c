/*
	Name: Jeeva
	Date: 23/01/23 11:25
	Description: Functions introduction 
*/
#include<stdio.h>				//with argument and without return
void fun(int ,int );
int main()
{
	int rst;
	int x,y;						//variable declaration to get input from user
	printf("Enter the values:");	
	scanf("%d%d",&x,&y);			//user value
	rst=fun(x,y);
	jct=fun(x,y);				//function call
}
	 void fun(int a,int b)	//function defination
	{
	int c;				
	c=0;
	c=a+b;
	printf("%d",c);
}


