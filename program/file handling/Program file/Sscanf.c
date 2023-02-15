/*
	Name: jeeva
	Date: 08/02/23 10:20
	Description: Sscanf 
*/
#include<stdio.h>

int main()
{
	char spr[100]={"jeeva 007 87.65 Z"};
	char name[20];
	int num;
	float val;
	char a;
	sscanf(spr,"\n%s" "\n%d" "\n%f" "\n%c",&name,&num,&val,&a);
	printf("%s",spr);
}
