#include<stdio.h>
int factorcount (int);
int main()
{
	int n,rev,fc=0;
	scanf("%d",&n);
	fc=factorcount(n);
	if(fc==2)
	{
		printf("prime");
		rev=reverse(n);
		fc=factorcount(n);
		if(fc==2)
		{
			printf("circularprime");
		}
		else
		{
			printf("not circular prime");
		}
	}
		else
		{
			printf("not prime");
		}
	}
		int factorcount(int n)
		{
			int i,fc=0;
			for(i=1;i<=n;i++)
			{
				if (n%i==0)
				{
					fc++;
				}
			}
			return fc;
		}
		int reverse(int n)
		{
			int r,sum=0;
			while(n!=0)
			{
				r=n%10;
				sum=sum*10+r;
				n=n/10;
			}
				return sum;
	
	
}
