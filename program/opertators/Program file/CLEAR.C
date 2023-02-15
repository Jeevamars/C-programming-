#include<stdio.h>
#include<conio.h>
void main()
{
int num,clear;
clrscr();
printf("Enter the value:");
scanf("%d",&num);
clear=num&(~(33<<1));
printf("clear:%d",clear);
getch();
}