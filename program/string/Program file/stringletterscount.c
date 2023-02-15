/*
	Name:  
	Date: 21/01/23 10:29
	Description: String letters count 
*/
#include<stdio.h>
int main()
{
		int i;
	char alph[50],val=0,val1=0,val2=0;
	printf("Enter the string:");
	gets(alph);
	for(i=0;alph[i];i++)
	{
	if((alph[i]>=65)&&(alph[i]<=91))
	{
	val++;
}	if((alph[i]>=97)&&(alph[i]<=122))
	{
	val1++;
}
	if(((alph[i]>=32)&&(alph[i]<=64))||((alph[i]>=123)&&(alph[i]<=126))||((alph[i]>=91)&&(alph[i]<=96)))
{
	val2++;
}
}
	printf("\nCapital Letters :%d",val);
	printf("\nSmall letters :%d",val1);
	printf("\nSpecial Characters: %d",val2);
}




