//vowel
#include<stdio.h>
#include<conio.h>
void main()
{
char alp;
clrscr();
printf("Enter the alphabet:");
scanf("%c",&alp);
if((alp=='a')||(alp=='e')||(alp=='i')||(alp=='o')||(alp=='u'))
printf("vowel");
else
printf("not vowel");
getch();
}