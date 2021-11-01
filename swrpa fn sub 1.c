#include<stdio.h>
int diff(int,int);
int main()
{
	int a,b,diff;
	scanf("%d%d",&a,&b);
	diff=sub(a,b);
	printf("%d",diff);
}
int diff(int x,int y)
{
	int z;
	z=x-y;
	return z;
}
