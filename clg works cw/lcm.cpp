//*lcm*//
#include<stdio.h>
int main()
{
	int a,b,a1,b1,lcm;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	a1=a;
	b1=b;
	while(a!=b)
	{
		if(a>b)
		 a=a-b;
		else
		 b=b-a;
	}
	printf("the gcd is %d",a);
	lcm=(a1*b1)/a;
	printf("the lcm is:%d",lcm);
	return 0;
}
