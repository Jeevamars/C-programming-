/*
	Name: jeeva 
	Date: 02/02/23 10:52
	Description: Structure program3
*/
#include<stdio.h>
struct institute
{
char staff_name[50];
int staff_age;
};
void main()
{
	struct institute man,man1;	
	scanf("%s%s",&man.staff_name,&man1.staff_name);
	man.staff_age=10;
	man.staff_age=12;
	printf("staff name:%s\nstaff name:%s\n",man.staff_name,man1.staff_name);
	printf("staff age %d\nstaff age%d\n", man.staff_age,man1.staff_age);
}
