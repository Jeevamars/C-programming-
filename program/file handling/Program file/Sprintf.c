/*
	Name: jeeva
	Date: 08/02/23 10:20
	Description: Sprintf 
*/
#include<stdio.h>

int main()
{
	char spr[100];
	char name[20]="jeeva";
	int num=007;
	float val=87.65;
	char a='Z';
	sprintf(spr,"\n%s" "\n%d" "\n%f" "\n%c",name,num,val,a);
	printf("%s",spr);
}
