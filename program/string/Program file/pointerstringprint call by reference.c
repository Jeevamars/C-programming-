/*
	Name: jeeva 
	Author:pointer
	Date: 27/01/23 12:25
	Description: string getting in pointer an pass argument
*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
char stringg(char *);
int main()
{
	int i;
 char *ptr;
 char string[50];
 printf("Enter the string character:");				// enter the string
	for(i=0;string[i-1]!=10;i++)					// for loop for geting character
	{
		scanf("%c",&string[i]);
}
string[i-1]=00;
 ptr=&string;
 		stringg(&string);
}
char stringg(char *va)
{
		for(;*va;va++)
	printf("%c",*va);

}

