/*armstrong*/
#include<stdio.h>
int armstrong(int x);
int main()
{
	int n,k;
	printf("enter the value of n\n");
	scanf("%d",&n);
	k=armstrong(n);
	if(k==n)
	printf("armstrong no");
	else
	printf("not armstrong no");
	return 0;
}
int armstrong(int x)
{
	int rem,sum=0;
	while(x!=0)
	{
		rem=x%10;
		sum=sum+(rem*rem*rem);
		x=x/10;
		
	}
	return sum;
}
