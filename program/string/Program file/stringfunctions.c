/*
	Name: jeeva  
	Date: 21/01/23 14:21
	Description: String functions 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[50],str1[50];
	printf("Enter the string1:");
	gets(str);
	printf("Enter the string2:");
	gets(str1);
	printf("Length of the string %d",strlen(str));// string length
	//printf("\nLower case of the string %s",strlwr(str));//string lower
	//printf("\nUpper case of the string %s",strupr(str));//string upper
	/*int k=strcmp(str,str1);
	{
		printf("\n%d",k);	
	}*/
	//puts(str);
	//printf("\nstring copy:%s\n",strcpy(str,str1));
	//puts(str);
	//printf("String reverse: %s",strrev(str));
	printf("String Concatination %s",strcat(str,str1));
}
