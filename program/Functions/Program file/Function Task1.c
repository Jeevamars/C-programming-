/*
	Name: Jeeva
	Date: 23/01/23 14:36
	Description: Functions add,sub,mul,div,mod,exit 
*/
#include<stdio.h>
void add(int);
//int k;        //with argument without return 
int sub();				//without argument with return
void mul();				//without argument  without return
int div(int);				//with argument with return
int mod();
int get(int);
int arr(int A[]);
int main()
{
	int op,i,n,val,sum=0,A[100];
	printf("Select the operation:");
	printf("\n 1.Addition 2.subtarction 3.multiplication 4.Division 5.modulo 6.exit");
	scanf("%d",&op);
	printf("Enter the value:");
	scanf("%d",&k);
	get(k);
	switch(op)
	{
		case 1:
			add(val);
		break;
		case 2:
			sub();
			printf("\n%d",sum);
			break;
		case 3:
			mul();
			break;
		case 4:
			div(val);
		case 5:
			mod();
		case 6:
			{
			printf("Exit");
			}
	}
		}
	int get(int l)
		{
			//int l;
			l=k;
			printf("%d",l);
			return l;
		}
		int arr(int A[])
		{
			int i,val;
			for(i=0;i<val;i++)
			{
				scanf("%d",&A[i]);
			}
			
		}

	void add(int val)
{
	int sum=0,i;
			get(val);
			//arr(A[]);
			for(i=0;i<val;i++)
			//sum=sum+A[i];	
			printf("%d",sum);
}
int sub()
{
int val,i,j,A[100],sum=0,sub=0,a;
		get (val);
				for(i=0;i<val;i++)
				{
				scanf("%d",&A[i]);
				}
				a=A[0];
					for(i=1;i<val;i++)
				{
				a=a-A[i];
				}
				printf("%d",a);
			return a;
		}
void mul()
{
int val,i,A[100],sum=1;
	printf("Enter the value:");
			scanf("%d",&val);
			for(i=0;i<val;i++)
			{
			scanf("%d",&A[i]);
			sum=sum*A[i];	
			}
			printf("%d",sum);
}
	int div(int val)
{
int i,j,A[100],a;
	printf("Enter the value:");
			scanf("%d",&val);
				for(i=0;i<val;i++)
				{
				scanf("%d",&A[i]);
				}
				a=A[0];
					for(i=1;i<val;i++)
				{
				a=a/A[i];
				}
				printf("%d",a);
			return a;
		}
	
int mod()
{
	int val,i,A[100],sum=0;
	printf("Enter the value:");
			scanf("%d",&val);
			for(i=0;i<val;i++)
			{
			scanf("%d",&A[i]);
			sum=A[i]%A[i+1];	
			}
			printf("%d",sum);
}
