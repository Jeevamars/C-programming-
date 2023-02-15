/*	Name: jeeva
	Date: 15/01/23 12:04
	Description: Super market */
#include<stdio.h>
#include<conio.h>
int fruits();
int vegetables();
int stationary();
int main()
{
	int rst,a[50],i,j,k,op,kgs,f,g,h,A,B,C,A1,A2,A3,B1,B2,B3,C1,C2,C3,Total=0,mode;
	char e;
	A=A1=A2=A3=0;
	B=B1=B2=B3=0;
	C=C1=C2=C3=0;
	printf("  \t\t\t***Welcome to supermarket***");
	printf("\n\nPlease press Enter 2 times to view the products");
	scanf("%c",&e);
	mainmenu:
	printf("\nSection 1: Fruits");
	printf("\nSection 2: vegatables");
	printf("\nSection 3: stationary");
	printf("\nSection 4: Bill counter");
	printf("\n\n\nPlease select the number to visit your section");
	scanf("%d",&op);
		if (op==1||op==2||op==3||op==4)
	{
	for(i=0;i<10;i++)
	{
	switch(op==1)
	{
		case 1:
			rst=fruits();
			printf("%d",rst);
			
}}}}
		
		
	int fruits()
	{
		int f;
		printf("\nFruits available:");
		printf("\n1.Mango   2.Orange   3.Banana   0.got mainmenu   press 9 to purchase");
		printf("\n\n**Choose the option to buy the fruit** ");
		scanf("%d",&f);
		return f;
	}
