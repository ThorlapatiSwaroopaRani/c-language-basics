#include<stdio.h>
int main()
{
	int arr[100],i,n,position,element;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	printf("enter the position:");
	scanf("%d",&position);
	printf("enter the element to insert in array:");
	scanf("%d",&element);
	for(i=n-1;i>=position;i--)
	{
		arr[i+1]=arr[i];
		                    
	}
	arr[position]=element;
	n++;
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
