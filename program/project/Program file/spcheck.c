/*	Name: jeeva
	Date: 15/01/23 12:04
	Description: Super market */
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,j,k,op,kgs,f,g,h,A,B,C,A1,A2,A3,B1,B2,B3,C1,C2,C3,Total=0,mode;
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
	system("cls");
	if (op==1||op==2||op==3||op==4)
	{
	for(i=0;i<4;i++)
	{
	switch(op==1)
	{
		case 1:
		printf("\nFruits available:");
		printf("\n1.Mango   2.Orange   3.Banana   0.got mainmenu   press 9 to purchase");
		printf("\n\n**Choose the option to buy the fruit** ");
		scanf("%d",&f);
		system("cls");
		switch(f)
		{
		case 1:
		{
		printf("you choosed mango:50rs/kg \nHow many kgs you need please enter");
		scanf("%d",&kgs);
		A1=kgs*50;
		printf("%d",A1);
		}
		break;
		case 2:
		{
		printf("you choosed Orange:60rs/kg \nHow many kgs you need please enter");
		scanf("%d",&kgs);
		A2=kgs*60;
		printf("%d",A2);
		}
		break;
		case 3:
		{
		printf("you choosed Banana:40rs/kg \nHow many kgs you need please enter");
		scanf("%d",&kgs);
		A3=kgs*40;
		printf("%d",A3);
		}
		break;
		case 9:
			if(A1!=A2!=A3!=0)
			{
				A=A1+A2+A3;
				
				printf("\nFruits you have purchased for Total :%d",A);
				printf("\n\n\t\t\t\t**Thanks for Purchasing**");
				printf("\n\n\t Please collect the product in Bill counter");
				printf("\n\nMain menu\n\n please select an option to continue Purchasing");
					
			}
				else
				printf("\n\tExit section\n you haven't purchased anything\n**Thank you visit again**");
		case 0:
		goto mainmenu;
		default:
			printf("Wrong selection");
			printf("\nPlease select correct option");
	}
	}
	}
}
else
{
	printf("\n\t\t\t\tInvalid selection");
	printf("\n\t\t\tPlease select correct option");
	goto mainmenu;
}
for(j=0;j<3;j++)
	{
	switch(op==2)
	{
		case 1:
		printf("\n vegatales available:");
		printf("\n1.Potato   2.Carrot   3.Tomato   0.got mainmenu   press 9 to purchase");
		printf("\n\n**Choose the option to buy the vegatable** ");
		scanf("%d",&g);
		system("cls");
		switch(g)
		{
		case 1:
		{
		printf("you choosed potato:80rs/kg \nHow many kgs you need please enter");
		scanf("%d",&kgs);
		B1=kgs*80;
		printf("%d",B1);
		system("cls");
		}
		break;
		case 2:
		{
		printf("you choosed carrot:45rs/kg \nHow many kgs you need please enter");
		scanf("%d",&kgs);
		B2=kgs*45;
		printf("%d",B2);
		system("cls");
		}
		break;
		case 3:
		{
		printf("you choosed Tomato:30rs/kg \nHow many kgs you need please enter");
		scanf("%d",&kgs);
		B3=kgs*30;
		printf("%d",B3);
		system("cls");
		}
		break;
		case 9:
			if(B1!=B2!=B3!=0)
			{
				B=B1+B2+B3;
				printf("\n\nVegetable you have purchased for Total :%d",B);
				printf("\n\t\t\t\t**Thanks for Purchasing**");
				printf("\n\n\t Please collect the product in Bill counter");
				printf("\nMain menu\n please select an option to continue Purchasing");
			}
				else
				printf("\n\tExit section\n you haven't purchased anything\n**Thank you visit again**");
		case 0:
		goto mainmenu;
		default:
			printf("Wrong selection");
				printf("\nPlease select correct option");
	}
	}
	}
	for(k=0;k<4;k++)
	{
	switch(op==3)
	{
		case 1:
		printf("\nstationary available:");
		printf("\n1.pen   2.Note   3.Paint box   0.got mainmenu   press 9 to purchase");
		printf("\n\n**Choose the option to buy the stationary** ");
		scanf("%d",&h);
		system("cls");
		switch(h)
		{
		case 1:
		{
		printf("you choosed pen:10rs/piece \nHow many qty you need please enter");
		scanf("%d",&kgs);
		C1=kgs*10;
		printf("%d",C1);
		system("cls");
		}
		break;
		case 2:
		{
		printf("you choosed Note:30rs/piece \nHow many qty you need please enter");
		scanf("%d",&kgs);
		C2=kgs*30;
		printf("%d",C2);
		system("cls");
		}
		break;
		case 3:
		{
		printf("you choosed Paint box:100rs/kg \nHow many qty you need please enter");
		scanf("%d",&kgs);
		C3=kgs*100;
		printf("%d",C3);
		system("cls");
		}
		break;
		case 9:
			if(C1!=C2!=C3!=0)
			{
				C=C1+C2+C3;
				printf("\nstationary items you have purchased for Total :%d",C);
				printf("\n\n\t\t\t\t**Thanks for Purchasing**");
				printf("\n\n\t Please collect the product in Bill counter");
				printf("\n\nMain menu\n\n please select an option to continue Purchasing");
			}
				else
				printf("\n\tExit section\n you haven't purchased anything\n**Thank you visit again**");
		case 0:
		goto mainmenu;
		default:
			printf("Wrong selection");
			printf("\nPlease select correct option");
	}
	}
	}
	{
	switch(op==4)
	{
		if(A!=0||B!=0||C!=0)
		{
		printf("\n\n**Total items you have purchased **");
		for(i=1;i<4;i++)
		{
		case 1:
			{
			printf("\n\n**Fruits**");
			if(A1!=0)
			{
			a[0]=A1/50;
			printf("\n\nMango: %dkgs x 50rs",a[0]);
			printf("\nTotal:%d",a[0]*50);
			}
			if(A2!=0)
			{
			a[1]=A2/60;
			printf("\n\norange: %dkgs x 60rs",a[1]);
			printf("\nTotal:%d",a[1]*60);
			}
			if(A3!=0)
			{
			a[2]=A3/40;
			printf("\n\nBanana: %dkgs x 40rs",a[2]);
			printf("\nTotal:%d",a[2]*40);
			}
		}
			case 2:
			{
			printf("\n\n**Vegatables**");
			if(B1!=0)
			{
			a[3]=B1/80;
			printf("\n\nPotato: %dkgs x 80rs",a[3]);
			printf("\nTotal:%d",a[3]*80);
			}
			if(B2!=0)
			{
			a[4]=B2/45;
			printf("\n\nCarrot: %dkgs x 45rs",a[4]);
			printf("\nTotal:%d",a[4]*45);
			}
			if(B3!=0)
			{
			a[5]=B3/30;
			printf("\n\nTomato: %dkgs x 30rs",a[5]);
			printf("\nTotal:%d",a[5]*30);
			}
		}
			case 3:
			{
			printf("\n\n**Stationary items**");
			if(C1!=0)
			{
			a[6]=C1/10;
			printf("\n\nPen: %dNos x 10rs",a[6]);
			printf("\nTotal:%d",a[6]*10);
			}
			if(C2!=0)
			{
			a[7]=C2/30;
			printf("\n\nNote: %dNos x 30rs",a[7]);
			printf("\nTotal:%d",a[7]*30);
			}
			if(C3!=0)
			{
			a[8]=C3/100;
			printf("\n\nPaintBox: %dNos x 100rs",a[8]);
			printf("\nTotal:%d",a[8]*100);
			}
		}
		Total=Total+A+B+C;
		printf("\n\nTotal amount need to be paid:%d",Total);
		printf("\n\nplease select payment option");
		printf("\n\n1.cash   2.Debit card  3.UPI Pay   4.Dont have enough cash return product");
		scanf("\n%d",mode);
		if(mode==1||mode==2||mode==3)
		{
		switch(mode)
		case 1:
		{
			printf("Payment received");
			printf("\n\n\n\t\t\t\t***Thanks for visiting come again***");
		}
		case 4:
		{
			printf("Please return some product:");
		}
		default:
		{
		printf("wrong selection");
		}		
	}
}
}
else
{
	printf("You haven't purchased anything");
}
}
}
}



