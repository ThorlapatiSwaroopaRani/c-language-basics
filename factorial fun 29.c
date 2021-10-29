#include<stdio.h>
int fact(int);
int main()
{
	int a,result;
	scanf("%d",&a);
	result=fact(a);
	printf("%d",result);
}
int fact(int a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;
}

