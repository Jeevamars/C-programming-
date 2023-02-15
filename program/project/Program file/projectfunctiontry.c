/*	Name: jeeva
	Date: 15/01/23 12:04
	Description: Super market */
#include<stdio.h>
#include<conio.h>
int fruits();
int fruits1();
int vegetables();
int vegetables1();
int stationary();
int stationary1();
int rst,rst1,rst2;
int main()
{
	int a[50],i,j,k,op,kgs,f,g,h,A,B,C,A1,A2,A3,B1,B2,B3,C1,C2,C3,Total=0,mode;
	char e;
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
	switch(op)
	{
		case 1:
			rst=fruits();
			printf("%d",rst);
			fruits1();
			break;
		case 2:
			rst1=vegetables();
			printf("%d",rst1);
			vegetables1();
			break;
		case 3:
			rst2=stationary();
			printf("%d",rst2);
			stationary1();
			break;					
}
}
}
}






	int fruits1()
	{	
		int kgs,A,A1,A2,A3;	
		switch(rst)
		{
		case 1:
		printf("you choosed mango:50rs/kg \nHow many kgs you need please enter");
		scanf("%d",&kgs);
		A1=kgs*50;
		printf("%d",A1);
		break;
		case 2:
		printf("you choosed Orange:60rs/kg \nHow many kgs you need please enter");
		scanf("%d",&kgs);
		A2=kgs*60;
		printf("%d",A2);
		break;
		case 3:
		printf("you choosed Banana:40rs/kg \nHow many kgs you need please enter");
		scanf("%d",&kgs);
		A3=kgs*40;
		printf("%d",A3);
		break;
		case 9:
			if(A1!=0||A2!=0||A3!=0)
			{
				A=A1+A2+A3;
				
				printf("\nFruits you have purchased for Total :%d",A);
				printf("\n\n\t\t\t\t**Thanks for Purchasing**");
				printf("\n\n\t Please collect the product in Bill counter");
				printf("\n\nMain menu\n\n please select an option to continue Purchasing");		
			}
			else
			{
				printf("\n\tExit section\n you haven't purchased anything\n**Thank you visit again**");
			}
		}
	}
	
	int vegetables1()
	{
		int kgs,B1,B2,B3,B;
		switch(rst1)
		{
		case 1:
		printf("you choosed potato:80rs/kg \nHow many kgs you need please enter");
		scanf("%d",&kgs);
		B1=kgs*80;
		printf("%d",B1);
		break;
		case 2:
		printf("you choosed carrot:45rs/kg \nHow many kgs you need please enter");
		scanf("%d",&kgs);
		B2=kgs*45;
		printf("%d",B2);
		break;
		case 3:
		printf("you choosed Tomato:30rs/kg \nHow many kgs you need please enter");
		scanf("%d",&kgs);
		B3=kgs*30;
		printf("%d",B3);
		break;
		case 9:
			if(B1!=0||B2!=0||B3!=0)
			{
				B=B1+B2+B3;
				printf("\n\nVegetable you have purchased for Total :%d",B);
				printf("\n\t\t\t\t**Thanks for Purchasing**");
				printf("\n\n\t Please collect the product in Bill counter");
				printf("\nMain menu\n please select an option to continue Purchasing");
			}
				else
				printf("\n\tExit section\n you haven't purchased anything\n**Thank you visit again**");
}
}
		
		int stationary1()
		{
			int kgs,C1,C2,C3,C;
		switch(rst2)
		{
		case 1:
		printf("you choosed pen:10rs/piece \nHow many qty you need please enter");
		scanf("%d",&kgs);
		C1=kgs*10;
		printf("%d",C1);
		break;
		case 2:
		printf("you choosed Note:30rs/piece \nHow many qty you need please enter");
		scanf("%d",&kgs);
		C2=kgs*30;
		printf("%d",C2);
		break;
		case 3:
		printf("you choosed Paint box:100rs/kg \nHow many qty you need please enter");
		scanf("%d",&kgs);
		C3=kgs*100;
		printf("%d",C3);
		break;
		case 9:
			if(C1!=0||C2!=0||C3!=0)
			{
				C=C1+C2+C3;
				printf("\nstationary items you have purchased for Total :%d",C);
				printf("\n\n\t\t\t\t**Thanks for Purchasing**");
				printf("\n\n\t Please collect the product in Bill counter");
				printf("\n\nMain menu\n\n please select an option to continue Purchasing");
			}
				else
				printf("\n\tExit section\n you haven't purchased anything\n**Thank you visit again**");		
	}
}
	int fruits()
	{
		int f;
		printf("\nFruits available:");
		printf("\n1.Mango   2.Orange   3.Banana   0.got mainmenu   press 9 to purchase");
		printf("\n\n**Choose the option to buy the fruit** ");
		scanf("%d",&f);
		return f;
	}
	int vegetables()
	{
		int f;
		printf("\n vegatales available:");
		printf("\n1.Potato   2.Carrot   3.Tomato   0.got mainmenu   press 9 to purchase");
		printf("\n\n**Choose the option to buy the vegatable** ");
		scanf("%d",&f);
		return f;
			}
	int stationary()
	{
		int f;
		printf("\nstationary available:");
		printf("\n1.pen   2.Note   3.Paint box   0.got mainmenu   press 9 to purchase");
		printf("\n\n**Choose the option to buy the stationary** ");
		scanf("%d",&f);
		return f;
	}
		
