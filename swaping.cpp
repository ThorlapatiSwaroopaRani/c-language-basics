#include<stdio.h>
int main()
{
	int a=10,b=20,c;
	c=a;
	a=b;
	b=c;
	printf("a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	printf("a=%d,b=%d",a,b);
}