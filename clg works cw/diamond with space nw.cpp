//*diamond with space*//
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter value of n\n");
	scanf("%d",&n);
	for(i=1;i<+n;i++)
	{
		for(j=1;j<n-i;j++)
		{
		
		 printf(" ");
	    }
	     for(j=1;j<=i*2-1;j++)
	     {
	     	printf("* ");
		 }
		printf("\n"); 
	}
	
}
for(i=n-1;i>0;i--)
{
	for(j=1;j<=n-i;j++)
	 {
	 	printf(" ");
	 	
	 }
	 for(j=1;j<=i*2-1;j++)
	 {
	 	printf("* ");
	 }
	 printf("\n");
	 return 0;
}
