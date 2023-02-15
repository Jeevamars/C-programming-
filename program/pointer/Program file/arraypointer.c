/*
	Name: Jeeva 
	Date: 31/01/23 11:03
	Description: 
*/
#include<stdio.h>
int main()
{
	int i,arr[4]={1,2,3,4,5,6},arr1[4]={4,5,6,7,8,9},arr2[4]={7,8,9,10,11,12};
	int (*ptr)[3],*p;
	ptr[0]=arr;
	ptr[1]=arr1;
	ptr[2]=arr2;
	printf("\narray address%d",&arr[0]);	
	printf("\narray address%d",&arr[1]);
	printf("\narray address%d\n",&arr[2]);
	
	printf("\npointer address%d",ptr[0]);	
	printf("\npointer address%d",ptr[1]);
	printf("\npointer address%d\n",ptr[2]);
	
	for(i=0;i<6;i++)
	printf("\npointer value arr=%d",(*(*ptr[0]));
	for(i=0;i<6;i++)
	printf("\npointer value arr1=%d",*(ptr[1])+i);
	for(i=0;i<6;i++)
	printf("\npointer value arr2=%d",*(ptr[2])+i);
		for(i=0;i<6;i++)
	printf("\npointer value arr2=%d",*(ptr[3])+i);
}
