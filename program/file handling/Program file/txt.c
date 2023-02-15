#include<stdio.h>
#include<string.h>
int main()
{
	int num,num1,num2;
	FILE *fptr;
	char strrr[100],loc[100];
	char str[20];
	char str1[20]=".txt";
	printf("enter loctaion");
	scanf("%s",loc);
	printf("enter username:");
	scanf("%s",str);
	
	sprintf(strrr,"%s%s%s",loc,str,str1);
	fptr=fopen(strrr,"w");
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
