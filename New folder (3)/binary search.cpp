/*array binary search*/
#include<stdio.h>
int main()
{
	int n,i,temp,j,last,first,mid,key;
	printf("enter the value of n\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		    }
		}
	}
	printf("sorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	first=0;
	last=n-1;
	printf("enter the value of key\n");
	scanf("%d",&key);
	mid=(first+last)/2;
	while(first<=last)
	{
		if(a[mid]<key)
		{
			first=mid+1;
		}
		else if(a[mid]==key)
		{
			printf("%d is found at %d",key,mid+1);
			break;
		}
		else
		{
			last=mid-1;
			mid=(first+last)/2;
		}
		mid=(first+last)/2;
		
	}
	if(first>last)
	{
		printf("value is not found");
	}
	return 0;
}
