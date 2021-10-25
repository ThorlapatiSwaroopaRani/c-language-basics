#include<stdio.h>
int main()
{
	int area,a,b,t;
	scanf("%d%d%d%d",&a,&b,&t,&area);
	switch(area)
	{
	case 1:
		printf("%d",a*a);
		break;
	case 2:
		printf("%d",a*b);
		break;
	case 3:
		printf("%d",a*b*t/100);
		break;
	default:
	printf("invalid input");	
		
	}
}