#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",ch);
	int a,b,c;
	scanf("%d%d",&a,&b);
	switch(ch);
	{
	    case'+':
		c=a+b;
		printf("%d",c);
		break;
		case'-':
		c=a-b;
		printf("%d",c);
		break;
		case'*':
		c=a*b;
		printf("%d",c);
		break;
		case'/':
		c=a/b;
		printf("%d",c);
		break;
		case'%':
		c=a%b;
		printf("%d",c);
		break;
		default:printf("inavlid arthmetic operator");
	}
}