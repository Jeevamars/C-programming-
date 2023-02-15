//palindrome using if statement
//name:jeeva Date:29/12/22
#include<stdio.h>
#include<conio.h>
void main()
{
int num,num1,num2,num3,num4,num5;
clrscr();
printf("Enter the value of num:");
scanf("%d",&num);
num1=num%10;
num2=num/10;
num3=num2%10;
num4=num2/10;
printf("%d\n%d\n%d",num1,num3,num4);
num5=((num1*10*10)+(num3*10)+(num4));
printf("\n%d",num5);
if(num==num5)
printf(" its palindrome");
else
printf("its not a palindrome");
getch();
}

