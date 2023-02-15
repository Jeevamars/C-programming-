/*
	Name: jeeva
	Date: 06/02/23 11:54
	Description:file handling sample 
*/

#include<stdio.h>
int main()
{
	char num[50],num2[50];
	int num1;
	FILE *fptr;
	fptr=fopen("Sample1.txt","w");
	if(fptr==NULL)
	{
		printf("Error!=");
		exit(1);
	}
	fprintf(fptr,"Enter the name:");
	gets(num);
	//scanf("%s",&num);
	fprintf(fptr,"%s",num);
	fprintf(fptr,"\nEnter the age:");
	scanf("%d",&num1);
	fprintf(fptr,"%d",num1);
	getchar();
	fprintf(fptr,"\nEnter the college name:");
	gets(num2);
	//scanf("%s",&num2);
	fprintf(fptr,"%s",num2);
	fclose(fptr);
	return 0;
}
