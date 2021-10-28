#include<stdio.h>
int main()
{
	int n,num,r,sum=0;
	scanf("%d",&n);
	n=num;
	while(num!=0)
	{
		r=num%10;
		sum=sum+(r*r*r);
	}
	if(n==sum)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not a armstrong number");
	}
	
	}
