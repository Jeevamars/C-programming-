#include<stdio.h>

int fruit(int )
{
	for(i=0;i<10;i++)
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
