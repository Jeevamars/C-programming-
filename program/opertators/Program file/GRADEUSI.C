#include<stdio.h>
#include<conio.h>
void main()
{
int maths,english,science,tamil,social,total,avg;
clrscr();
printf("maths:");
scanf("%d",&maths);
printf("english:");
scanf("%d",&english);
printf("science:");
scanf("%d",&science);
printf("tamil:");
scanf("%d",&tamil);
printf("social:");
scanf("%d",&social);
total=(maths+english+science+tamil+social);
avg=(total/5);
printf("average:%d",avg);
if(avg>=90)
printf("\nS grade");
else if((avg>=80)&&(avg<90))
printf("\nA grade");
else if((avg>=70)&&(avg<80))
printf("\nB grade");
else if((avg>=60)&&(avg<=70))
printf("\nC grade");
else
printf("\nArrear");
getch();
}