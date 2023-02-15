#include<stdio.h>
#include<conio.h>
void main()
{
int num,set;
clrscr();
printf("Enter the value:");
scanf("%d",&num);
set=num|(33<<1);
printf("Set:%d",set);
getch();
}
