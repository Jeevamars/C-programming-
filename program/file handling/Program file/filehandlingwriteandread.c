/*
	Name: jeeva
	Date: 06/02/23 11:54
	Description:file handling sample write and read 
*/

#include<stdio.h>
int main()
{
	char num[50],num2[50];
	int num1;
	FILE *fptr;
	fptr=fopen("Sample4.txt","w+");
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
		
	printf("Read the text file:");
	fscanf(fptr,"%s",&num);
	printf("The name is: %s",num);
	fscanf(fptr,"%d",&num1);
	printf("\nThe age is:%d\n",num1);
	getchar();
	printf("College name:");	
	fscanf(fptr,"%c",&num2);		//syntax of fscanf(file name,data specifier,& of variale name)
	fgets(num2,100,fptr);			//syntax of fgets(variable name,array size,file name)
	puts(num2);
	
}
