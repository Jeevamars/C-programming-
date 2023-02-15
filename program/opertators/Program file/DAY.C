#include<stdio.h>
#include<conio.h>
void main()
{
char day;
clrscr();
printf("Enter the First letter:\n");
scanf("%c",&day);
if(day=='m')
printf("Monday");
else if(day=='t')
printf("Tuesday");
else if(day=='w')
printf("wednesday");
else
printf("Not found");
getch();
}