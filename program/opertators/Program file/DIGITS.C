// Number of digits upto 6digit
//Name:Jeeva Date:30/12/22
#include<stdio.h>
#include<conio.h>
void main()
{
long int value;
clrscr();
printf("Enter the value:");
scanf("%ld",&value);
if((value>=0)&&(value<10))
printf("\nOne Digit");
else if((value>=10)&&(value<100))
printf("\nTwo digit");
else if((value>=100)&&(value<1000))
printf("\n\Three Digit");
else if((value>=1000)&&(value<10000))
printf("\nFour Digit");
else if((value>=10000)&&(value<100000))
printf("\nFive Digit");
else if((value>=100000)&&(value<1000000))
printf("\nSix Digit");
else
printf("Error");
getch();
}