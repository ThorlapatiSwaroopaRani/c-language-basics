#include<stdio.h>
int big(int,int,int);
int main()
{
	int a,b,c,result;
	scanf("%d%d%d",&a,&b,&c);
	result=big(a,b,c);
	printf("biggest:%d",result);
}
int big(int a,int b,int c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if (b>a && b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}