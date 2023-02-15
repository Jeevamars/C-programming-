/*
	Name: jeeva
	Date: 27/01/23 19:13
	Description:string getting in pointer an pass argument and print in tw string
*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
char string(char *);
int main()
{
	int i;
 char *ptr;
 char strin[50];
 printf("Enter the string character:");				// enter the string
	for(i=0;strin[i-1]!=10;i++)					// for loop for geting character
	{
		scanf("%c",&strin[i]);
}
strin[i-1]=00;
 ptr=&strin;
 //ptr=&strinn;
 		string(&strin);
}
char string(char *va)
{
	int i;
	//char str1[50];
	printf("Enter in 1st string value: ");
		for(i=0;va[i-1]!=32;va++)
		{
	printf("%c",*va);
}
		printf("\nEnter in 2nd string value: ");
		while(va[i-1]=32)
		{
	printf("%c",*va);
va++;
if(va[i-1]=='\0')
break;
}
}
