//switch case month
#include<stdio.h>
#include<conio.h>
void main()
{
char d;
clrscr();
printf("Enter the 1st letter:");
scanf(" %c",&d);
switch(d)
{
case 'j':
{
printf("January");
}
case 'j':
{
printf("Feburary");
}
break;
case 'm':
{
printf("March");
}
break;
case 'a':
{
printf("April");
}
break;
default:
{
printf("Error");
}
}
getch();
}