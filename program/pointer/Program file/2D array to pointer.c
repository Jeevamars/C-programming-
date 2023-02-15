/*
	Name: Jeeva 
	Date: 31/01/23 11:03
	Description: 2D array pointer 
*/
#include<stdio.h>
int main()
{
	int i,arr[4]={{11,15,76,89},{44,555,65,76},{71,83,91,110}};
	int (*ptr)[3];
	ptr=&arr;
	printf("ptr address \n%d \n%d  \n%d",ptr,(ptr+1),(ptr+2));
	printf("\n\nptr block 1\n%d \n%d  \n%d",*ptr,*(ptr+1),*(ptr+2));	
	
	printf("\n\nptr value\n%d  \n%d  \n%d",*(*(ptr)),*(*(ptr)+1),*(*(ptr)+2));//(*(*ptr))+2));
	
		printf("\n\nptr value\n%d  \n%d  \n%d", *(*ptr),*(*(ptr)+1));
}
