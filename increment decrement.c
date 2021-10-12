#include<stdio.h>
int main()
{
	int a=20,b;
	b=++a;
	printf("%d\n",b);
	printf("%d\n",a);
	b=a--;
	printf("%d\n",a);
	printf("%d\n",b);
	b=--a;
	printf("%d\n",a);
	printf("%d\n",b);
	b=a++;
	printf("%d\n",a);
	printf("%d\n",b);
}
	
