/*pattern printing 3 even star */
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		printf(" ");
		for(k=0;k<=i;k++)
		printf("*");
		
		printf("\n");
	}
	return 0;
}
