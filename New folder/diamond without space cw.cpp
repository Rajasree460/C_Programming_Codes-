/*diamond without space*/
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2-i;j++)
		printf(" ");
		for(k=0;k<2*i+1;k++)
		printf("*");
		
		printf("\n");
	}
   {
   	for(i=2;i>0;i--)
   	{
   		for(j=0;j<3-i;j++)
   		printf(" ");
   		for(k=0;k<2*i-1;k++)
   		printf("*");
   		
   		printf("\n");
	   }
	   return 0;
   }
}
