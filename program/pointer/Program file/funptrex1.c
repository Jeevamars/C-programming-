/*
	Name: jeeva 
	Date: 01/02/23 11:07
	Description: function pointer example program 
*/

#include<stdio.h>
int subtraction (int a, int b)
{
return a-b;
}
int main()
{
int (*fp) (int, int)=subtraction; //Calling function using function pointer
int result = fp(5, 4);
printf(" Using function pointer we get the result: %d", result);
return 0;
}
