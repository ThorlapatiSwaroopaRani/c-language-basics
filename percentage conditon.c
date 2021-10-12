#include<stdio.h>
int main()
{
	int english,telugu,maths,social,science,total;
	float per;
	scanf("%d%d%d%d%d",&english,&telugu,&maths,&social,&science);
	total=english+telugu+maths+social+science;
	per=(total*100/500);
	printf("%.3f",per);
	if(per>=90)
	{
		printf("grade A");
	}
	else if(per>=80 && per<=90)
	{
		printf("grade B");
		
	}
	else if(per>=70 && per<=80)
	{
		printf("grade C");
	}
	else if(per>=60 && per<=70)
	{
		printf("garde D");
	}
	else if(per>=50 && per<=60)
	{
		printf("gradeE");
	}
	else
	{
		printf("fail");
	}
			
}
