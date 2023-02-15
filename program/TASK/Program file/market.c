//super market
//created by jeeva 
// Date: 03/01/2022
#include<stdio.h>
#include<conio.h>
int main()
{
	int f,val,kg,m1=50,price,mango,o1=60,g1=70,orange,grapes,c1=30,carrot,p1=40,potato,t1=45,tomato;
	char a;
	printf("Choose the product:");
	printf("\n1.Fruit \n 2.veg");
	scanf("%d",&val);
	//printf("%d",val);
	if(val==1) 
	{
		printf("Select the fruits");
		printf("\nFurits available: \n 1.Mango \n 2.orange \n 3.grapes ");
		scanf("%d",&f);
		
		switch(f)
		{
			case 1:
				{
			 	printf("\nyou choose mango it is 50 rs per Kg");
				printf("\nwant to purchase Please press Y");
				scanf(" %c",&a);
				if(a=='y')
				{
				printf("\nHow much kg");
				scanf("\n%d",&kg);
				  mango=kg*m1;
				  printf("Amount:%d",mango);
				  printf("\nThanks for Purchasing");
			}
			else
			{
				printf("Goto mainmenu");
			}
		}
		break;
			 case  2:
			 	{
			 	printf("\nyou choose orange it is 60 rs per Kg");
				printf("\nwant to purchase Please press Y");
				scanf(" %c",&a);
				if(a=='y')
				{
				printf("\nHow much kg");
				scanf("\n%d",&kg);
				  orange=kg*o1;
				  printf("Amount:%d",orange);
				  printf("\nThanks for Purchasing");
			}
			else
			{
				printf("Goto mainmenu");
			}
		}
		break;
			case 3:
				{
				printf("\nyou choose grapes it is 70 rs per Kg");
				printf(" \nwant to purchase Please press Y");
				scanf("\n %c",&a);
				if(a=='y')
				{
				printf("How much kg");
				scanf("\n%d",&kg);
				  grapes=kg*g1;
				  printf("Amount:%d",grapes);
				  printf("\nThanks for Purchasing");
			}
			else
			{
				printf("Goto main menu");
			}
		}
		break;
	}
}
if(val==2) 
	{
		printf("Select the vegtables");
		printf("\nvegtales available: \n 1.carrot \n 2.potato \n 3.tomato ");
		scanf("%d",&f);
		
		switch(f)
		{
			case 1:
				{
			 	printf("\nyou choose carrot it is 30 rs per Kg");
				printf("\nwant to purchase Please press Y");
				scanf(" %c",&a);
				if(a=='y')
				{
				printf("\nHow much kg");
				scanf("\n%d",&kg);
				  carrot=kg*c1;
				  printf("Amount:%d",carrot);
				  printf("\nThanks for Purchasing");
			}
			else
			{
				printf("Goto mainmenu");
			}
		}
		break;
			 case  2:
			 	{
			 	printf("\nyou choose potato it is 40 rs per Kg");
				printf("\nwant to purchase Please press Y");
				scanf(" %c",&a);
				if(a=='y')
				{
				printf("\nHow much kg");
				scanf("\n%d",&kg);
				  potato=kg*p1;
				  printf("Amount:%d",potato);
				  printf("\nThanks for Purchasing");
			}
			else
			{
				printf("Goto mainmenu");
			}
		}
		break;
			case 3:
				{
				printf("\nyou choose grapes it is 45 rs per Kg");
				printf(" \nwant to purchase Please press Y");
				scanf("\n %c",&a);
				if(a=='y')
				{
				printf("How much kg");
				scanf("\n%d",&kg);
				  tomato=kg*t1;
				  printf("Amount:%d",tomato);
				  printf("\nThanks for Purchasing");
			}
			else
			{
				printf("Goto main menu");
			}
		}
		break;
	}
	getch();
}
}


