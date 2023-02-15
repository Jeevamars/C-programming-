/*
	Name: Jeeva
	Date: 27/01/23 10:50
	Description: pointer increment,decrement 
*/
#include<stdio.h>
int main()
{
		int *ptr,a=1,b=2,c=3,d=4;
		ptr=&a;
		ptr=&b;
		ptr=&c;
		ptr=&d;
		//ptr1=&val1;
		printf("pointer value %d",*ptr);				//ptr value:4
		printf("\npre increment:%d",*++ptr);			//ptr address is pre incremented so its moved and print 3
		printf("\npost increment:%d",*ptr++);			//ptr address is post incremented so its moved and print 3				
		printf("\npointer value %d",*ptr);				//previous address is post incremented so its moved to 2 
		printf("\npre decrement:%d",*--ptr);			//ptr adress is pre decrement so its moved to 3
		printf("\npost decrement:%d",*ptr--);			//ptr adress is post decrement so its moved to 3
		printf("\npointer value %d",*ptr);				//now the ptr value is 4
		printf("\npre increment:%d",++*ptr);			//value is incremented
			printf("\npre decrement:%d",--*ptr);		//value is drecemented
}

