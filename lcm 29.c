#include<stdio.h>
int main()
{
	int a,b,res,t=2;
	scanf("%d",&a,&b);
	while(1)
	{
		if(a%t==0 && b%t==0)
        {    
     	a=a/2;
		b=b/2;
		res=res*t;
    	}
    	else
    	{
		 t++;
		}
		if(t>a || t<b)
		{
			res=a*b*res;
			break;
		}
    	
	}
	printf("%d",res);
	
}