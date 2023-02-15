/*
	Name: jeeva 
	Date: 01/02/23 14:09
	Description: Function to string and print argument  pass 
*/
#include<stdio.h>
int fun1(char []);
int fun2(char []);
int fun3(char []);
int main()
{
	char string[50],(*fun)(char []);
	
	//char (*fun[3])(char [])={fun1,fun2,fun3};
	printf("Enter the string:");
	gets(string);
	puts(string);
	//fun=fun1;		//function pointer --- 1 string--- argument pass and print 
	//fun(string);				
	//fun=string;		//funtion  ---1 string ---argument pass and print
	//fun1(string);
	fun2(string);
	
}
/*int fun1(char str[])
{
	printf("inside function:%s",str);
}
int fun2(char str1[])
{
	int i=0;
	while(str1[i]!='\0')
	{
	printf("\n%c",str1[i]);
	//printf("\n%c%c%c",str1[i],str1[i+1],str1[i+2]);
	i++;
}
}*
 int fun2(char *fun)
 {
//	while(*fun)
//	{
//		printf("%c",*fun++);
//		//fun++;
//	}
	
	int i=0;
if(i)
	while(fun[i]!='\0')
	{
	printf("\n%c",fun[i+1]);
	i++;
}

}


 

