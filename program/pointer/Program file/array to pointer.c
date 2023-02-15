/*
	Name: Jeeva
	Date: 30/01/23 15:14
	Description:array to pointer 
*/
#include<stdio.h>
	int main()
	{
		int *ptr[10],arr[10],i;
		char *jj;
		printf("Enter the array:");
		//printf("%d",sizeof(*jj));
		for(i=0;i<3;i++)
		{
		scanf("\n%d",&arr[i]);
	}
		for(i=0;i<3;i++)
		{
		ptr[i]=&arr[i];
		printf("\npointer address%d",&ptr[i]);
		printf("\narray address%d",&arr[i]);
		printf("\npointer  value%d",*ptr[i]);
			printf("\npointer array address %d",ptr[i]);
			printf("\npointer  %d",*&ptr[i]);
	}
	
		//ptr++;
		//printf("%d",ptr++);
	}



