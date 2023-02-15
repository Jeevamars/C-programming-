/*
	Name: jeeva 
	Date: 02/02/23 10:52
	Description: Structure program2
*/
#include<stdio.h>
struct institute
{
char staff_name;
int staff_age;
};
void main()
{
	struct institute manfree;	
	scanf("%s",&manfree.staff_name);
//manfree.staff_name="Salaman";
	manfree.staff_age=10;
	printf("staff name %c\n", manfree.staff_name);
	printf("staf age %d\n", manfree.staff_age);
	printf("\n%d",sizeof manfree);
//printf("\n%d",sizeof);
}

