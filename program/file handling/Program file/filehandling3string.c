/*
	Name: jeeva
	Date: 06/02/23 11:54
	Description:file handling sample write and read 3 string 
*/

#include<stdio.h>
int main()
{
	char num[100],num2[100],num1[100],num3[100],num4[100],num5[100];
	FILE *fptr;
	fptr=fopen("Sample5.txt","w+");
	if(fptr==NULL)
	{
		printf("Error!=");
		exit(1);
	}
	//fprintf(fptr,"Enter the string 1:");
	gets(num);
	//puts(num);
	fprintf(fptr,"\n%s",num);
	//fprintf(fptr,"Enter the string 2:");
	gets(num1);
	//puts(num1);
	fprintf(fptr,"\n%s",num1);
	//getchar();
	//fprintf(fptr,"\nEnter the string 3:");
	gets(num2);
	//puts(num2);
	fprintf(fptr,"\n%s",num2);
	fclose(fptr);

	fptr=fopen("Sample5.txt","r");
	if(fptr==NULL)
	{
		printf("Error!=");
		exit(1);
	}
	//printf("Read the text file:");
	fgets(num3,100,fptr);
	puts(num3);
	//printf("\n1st string: %s\n",num3);
	fgets(num4,100,fptr);
	puts(num4);
	//printf("\n2nd string: %s\n",num4);
	fgets(num5,100,fptr);
	puts(num5);		
	//printf("\n3rd string: %s",num5);			//syntax of fscanf(file name,data specifier,& of variale name)
	//puts(num2);								//syntax of fgets(variable name,array size,file name)	
	fclose(fptr);
}
