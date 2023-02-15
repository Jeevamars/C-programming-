/*
	Name: Jeeva
	Date: 23/01/23 11:25
	Description: Functions introduction 
*/
#include<stdio.h>				//without argument and without return
void fun();
int main()
{
	int x,y;						//variable declaration to get input from user
	printf("Enter the values:");	
	scanf("%d%d",&x,&y);			//user value
	fun();				//function call
}
	 void fun()	//function defination
	{			
	int a=8,b=9,c=0;
	c=a+b;	
	printf("%d",c);
}


