#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,;
char op;
clrscr();
printf("Enter the value");
scanf("%d%d",&a,&b);
printf("Enter the operator");
scanf(" %c",&op);
switch(op)
{
case '+':
{
printf("Addition %d",a+b);
}
break;
case '-':
{
printf("Subtraction %d",a-b);
}
break;
default:
{
printf("Not found");
}
}
getch();
}