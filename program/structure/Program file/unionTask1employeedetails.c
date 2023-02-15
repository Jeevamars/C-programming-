/*
	Name: Jeeva
	Date: 04/02/23 10:18
	Description: Structure pointer program task 1 
*/
#include<stdio.h>
union card
{
	char employee_name[50];
	int employee_id;
	int salary;
	int experience;
};
int main()
{
	int i;
	union card p1[20];
	union card *ptr=&p1;
	for(i=0;i<3;i++)
	{
	printf("Enter the name:");
	scanf("%s",&(p1[i].employee_name));
	printf("Enter the employee  ID:");
	scanf("%d",&(p1[i].employee_id));
	printf("Enter the salary:");
	scanf("%d",&(p1[i].salary));
	printf("Enter the Experience:");
	scanf("%d",&(p1[i].experience));
}
for(i=0;i<3;i++)
{
	printf("\nName:%s",ptr->employee_name);
	printf("\nEmployee ID:%d",ptr->employee_id);
	printf("\nSalary:%d",ptr->salary);
	printf("\nExperience:%d",ptr->experience);
	ptr++;
}
 	}

