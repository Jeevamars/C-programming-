/*
	Name: jeeva
	Date: 06/02/23 11:54
	Description:file handling sample 
*/

#include<stdio.h>
int main()
{
	int num,num1,num2;
	FILE *fptr;
	fptr=fopen("Sample.txt","w");
	if(fptr==NULL)
	{
		printf("Error!=");
		exit(1);
	}
	fprintf(fptr,"Enter the number:");
	scanf("%d",&num);
	fprintf(fptr,"%d",num);
	fprintf(fptr,"\nEnter the number:");
	scanf("%d",&num1);
	fprintf(fptr,"%d",num1);
	fprintf(fptr,"\nEnter the number:");
	scanf("%d",&num2);
	fprintf(fptr,"%d",num2);
	fclose(fptr);
	return 0;
}
