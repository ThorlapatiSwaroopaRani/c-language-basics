#include<stdio.h>
int main()
{
	int arr[100],i,n,small,position;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	small=arr[0];
	for(i=0;i<n;i++)
	{
		if(small>arr[i])
		{
			small=arr[i];
			position=i;
		}
	}
	printf("smallest element is %d",small);
	printf("position is %d",position);
}
