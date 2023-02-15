/*
	Name: jeeva 
	Date: 02/02/23 10:52
	Description: Structure program4
*/
#include<stdio.h>
struct institute
{
char std_name[50];
int std_age;
int roll_no;
};
void main()
{
	struct institute man[20];
	int i;
	for(i=1;i<3;i++)
	{	
	printf("Enter the  student name%d:",i);
	scanf("%s",&man[i].std_name);
	printf("Enter the  student age %d:",i);
	scanf("%d",&man[i].std_age);
	}
		for(i=1;i<3;i++)
	{	
	printf("\nstd name%d:  %s",i,man[i].std_name);
	printf("\nstd age %d:  %d\n",i,man[i].std_age);
}
}
