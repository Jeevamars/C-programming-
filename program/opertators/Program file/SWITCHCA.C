#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
switch(a)
{
case 1:
{
printf("Apple");
}
break;
case 2:
{
printf("Orange");
}
break;
case 3:
{
printf("Mango");
}
break;
default:
{
printf(" Error");
}
}
getch();
}