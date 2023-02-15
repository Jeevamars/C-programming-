#include<stdio.h>
#include<conio.h>
void main()
{
int val1,val2,r1;
clrscr();
printf("Enter the value:");
scanf("%d%d",&val1,&val2);
r1=val1>>val2;
printf("result:%d",r1);
getch();
}