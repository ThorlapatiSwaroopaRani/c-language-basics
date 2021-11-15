#include<stdio.h>
int main()
{
	int arr[100],i,n,large,position;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	large=arr[0];
	for(i=0;i<n;i++)
	{
		if(large<arr[i])
		{
			large=arr[i];
			position=i;
		}
	}
	printf("largest element is %d",large);
	printf("position is %d",position);
}
