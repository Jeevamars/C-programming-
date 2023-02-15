/*	Name: jeeva
	Date: 15/01/23 12:04
	Description: Super market */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int k=1,l=1;
	char e,op[50],str1[50]="fruits";
	printf("  \t\t\t***Welcome to supermarket***");
	printf("\n\nPlease press Enter 2 times to view the products");
	scanf("%c",&e);
	printf("\nSection 1:fruits");
	printf("\nSection 2:vegatables");
	printf("\nSection 3:stationary");
	printf("\nSection 4:Bill counter");
	printf("\n\n\nPlease type the section name to visit your");
	gets(op);
	if (k=!strcmp(str1,op))
		{
		char F1[50]="mango",F2[50]="orange",F3[50]="banana",fruit[50];
		printf("\nFruits available:");
		printf("\n1.mango   2.orange   3.banana   0.got mainmenu   press 9 to purchase");
		printf("\n\n**Type the fruit name to purchase** ");
		gets(fruit);
		if(l!=((strcmp(fruit,F1))||(strcmp(fruit,F2))||(strcmp(fruit,F3))))
		{
			printf("How much kgs you want:");
}
}
}
