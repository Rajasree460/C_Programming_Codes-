/*pattern*/
#include<stdio.h>
int main()
{
	int n,i,j,c=1;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	for(j=0;j<n-i;j++)
	printf("%d",c);
	c++;
	 printf("\n");
    }
    return 0;
}
