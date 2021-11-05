#include<stdio.h>
fact(int);
int main()
{
	int n;
	scanf("%d",&n);
	fact(n);
}
fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
