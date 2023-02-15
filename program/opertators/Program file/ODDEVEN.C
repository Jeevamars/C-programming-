#include<stdio.h>
#include<conio.h>
void main()
{
int nm,pos,toggle;
clrscr();
printf("Enter the value:");
scanf("%d",&nm);
printf("Enter the position:");
scanf("%d",&pos);
toggle=nm^(1<<pos);
printf("value:%d",toggle);
getch();
}