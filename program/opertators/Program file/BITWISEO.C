#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,result,result1,result2;
clrscr();
printf("Enter the value:");
scanf("%d%d",&num1,&num2);
//result=num1&num2;
//printf("Result:%d",result);
//result1=num1|num2;
//printf("Result1:%d",result1);
result2=num1^num2;
printf("result2:%d",result2);
getch();
}