
/*
	Name: Jeeva
	Date: 23/01/23 14:36
	Description: Functions add,sub,mul,div,mod,exit 
*/
#include<stdio.h>
void add(int,int []);				//with argument without return 
int sub();					//without argument with return
void mul();					//without argument without return
int div(int);				//with argument with return	
int k;
int main()
{
	int rst,op,i,n,val,sum=0,A[100];
	main1:
	printf("Select the operation:");
	printf("\n 1.Addition 2.subtarction 3.multiplication 4.Division 5.***Exit*** ");
	scanf("%d",&op);
	if(op==1||op==2||op==3||op==4)
	{
	main2:
	printf("Enter the value:");
	scanf("%d",&k);
switch(op)
	{
		case 1:
			for(i=0;i<k;i++)
			scanf("%d",&A[i]);	
			add(k,A);
		break;
		case 2:
			sub();
			break;
		case 3:
			mul();
			break;
		case 4:		
			div(k);		
	}
			int x;
			printf("\nEnter: 1 to go Main menu or  2 to continue  or  3 to clear screen ");
			scanf("%d",&x);
			if(x==1)
			goto main1;
			if(x==2)
			goto main2;
			if(x==3)
			system("cls");
			goto main2;		
		}
				else
		{	
			printf("Exit");
	}
}
void add(int val,int A[])
			{
			int i,sm=0;
			{
			for(i=0;i<val;i++)	    
			sm=sm+A[i];
		}
			printf("%d",sm);
		}
int sub()
{
int val,i,A[100],a;
				for(i=0;i<k;i++)
				{
				scanf("%d",&A[i]);
				}
				a=A[0];
					for(i=1;i<k;i++)
				{
				a=a-A[i];
				}
				printf("%d",a);
		}
		void mul()
{
int i,A[100],sum=1;
			for(i=0;i<k;i++)
			{
			scanf("%d",&A[i]);
			sum=sum*A[i];	
			}
			printf("%d",sum);
}
		int div(int val)
			{
				int i,A[100],a;
				for(i=0;i<val;i++)
				scanf("%d",&A[i]);
				a=A[0];
					for(i=1;i<k;i++)
				{
				a=a/A[i];
				}
				printf("%d",a);
			return a;
	}
			



