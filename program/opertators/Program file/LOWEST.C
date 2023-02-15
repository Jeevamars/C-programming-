#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the value of a,b and c:");
scanf("%d%d%d",&a,&b,&c);
if((a<b)&&(a<c))
printf("\na is lowest %d",a);
if((b<a)&&(b<c))
printf("\nb is lowest %d",b);
if((c<b)&&(c<a))
printf("c is lowest %d",c);
getch();
}