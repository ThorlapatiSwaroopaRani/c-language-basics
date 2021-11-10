#include<stdio.h>
int main()
{
	int arr[100],i,n;
	scanf("%d",&n);//2
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--)
	printf("%d\n",arr[i]);
}
