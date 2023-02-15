// Nested ifelse program for ATM
//Jeeva Date:02/01/2023
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f=1000,bal,h;
clrscr();
printf("Enter the used Id:");
scanf("\n%d",&a);
if(a==1)
{
   printf("User name correct");
   printf("\nEnter the passord:");
   scanf("%d",&b);
      if(b==2)
      {
      printf("passord is correct");
      printf(" \nEnter OTP:");
      scanf("%d",&c);
	   if(c==3)
	   {
	   printf("\nAccount verified");
	   printf("\nwelcome");
	   printf("\n1. Cash withdraw");
	   printf("\n2. check balance");
	   printf("\n3. cash depoist");
	   printf("\nSelect an option:");
	   scanf("%d",&d);
		if(d==1)
		{
		printf("Enter the amount:");
		scanf("%d",&e);
		h=(e<=1000);
		if(h!=1)
		{
		printf(" No sufficient balance");
		printf("\n***Thanks for using ATM***");
		}
		else
		{
		printf("\nCollect your money");
		bal=f-e;
		printf("\nAvailable balance:%d",bal);
		printf("\n***Thank you for using ATM***");
		}
		}
		 if(d==2)
		 {
		 printf("your balance is:%d",f);
		 printf("\n***Thank you for using ATM***");
		 }
		 if(d==3)
		 {
		 printf("Insert the money");
		 printf("\nAmount added to your account");
		 printf("\n*** Thanks for using ATM***");
		 }
	     if((d!=1)&&(d!=2)&&(d!=3))
	     {
	     printf("\nWrong selection");
	     printf("\nGo to main menu");
	    }
	    }
	   else
	   {
	   printf("\nAccount not verified");
	   }
	   }
      else
      {
      printf("password incorrect");
      }
      }
else
{
printf("wrong user name:");
}
getch();
}