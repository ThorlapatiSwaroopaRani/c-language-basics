#include<stdio.h>
int prime(int);
int main()
{
	int n,i; 
	printf("prime numbers upto:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(isprime(i))
		{
			printf("%d\t",i);
		}
	}
}
int isprime(int m)
{
	int i;
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
			return 0;
		}
	} return 1;
}
