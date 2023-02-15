/*
	Name: jeeva
	Date: 06/02/23 11:54
	Description:file handling sample 
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char num[50],num2[100];
	int num1;
	FILE *fptr;
	fptr=fopen("Sample2.txt","r");			//read the data for the txt file using "r".....
	if(fptr==NULL)
	{
		printf("Error!=");
		exit(1);
	}
	fscanf(fptr,"%s",&num);
	printf("The name is: %s",num);
	
	fscanf(fptr,"%d",&num1);
	printf("\nThe age is:%d\n",num1);
	fgetc(fptr);
	printf("College name:");	
	//fscanf(fptr,"%c",&num2);		//syntax of fscanf(file name,data specifier,& of variale name)
	fgets(num2,100,fptr);			//syntax of fgets(variable name,array size,file name)
	puts(num2);
	fclose(fptr);
	return 0;
}
