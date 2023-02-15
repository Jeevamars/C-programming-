/*
	Name: jeeva
	Date: 02/02/23 14:23
	Description: Structure packing 
*/
#include<stdio.h>
//#pragma pack(1)								// clearing the extra space allocation in character data type  
	struct abc
	{
	int a;
	char b;
	double c;
	float d;
}pack;
int main()
{
	printf("%d",sizeof(pack));
	printf("\n%d",sizeof (double));
	printf("\n%d",sizeof (float));
	printf("\n%d",sizeof (int));
	printf("\n%d",sizeof (char));
}

