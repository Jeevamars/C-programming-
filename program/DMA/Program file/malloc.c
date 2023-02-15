/*
	Name: jeeva
	Date: 08/02/23 12:03
	Description:DMA malloc 
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* ptr,n,i;
	
	printf("Enter the elements:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));			//syntax
	
	if(ptr==NULL)
	{
		printf("memory not allocated\n");
		exit(1);
	}
	else
	{
		printf("\nmemory sucessfully allocatedusing malloc\n");
			for(i=0;i<n;i++)
			ptr[i]=i+1;
		printf("\nThe elements of the array are:");
			for(i=0;i<n;i++)
			printf("\n%d",ptr[i]);
	}
	free(ptr);
	ptr=NULL;
	printf("\nAfter free:");
			printf("\n%d",ptr);

	return 0;
}

