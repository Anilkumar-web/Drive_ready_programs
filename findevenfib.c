#include<stdio.h>
int find_evenfib(int num)
{
	int i,a=0,b=1,c,ec=0;
	if(num==1)
	{
		return 0;
	}
	while(num)
	{	
		if(c%2==0)
		{
			ec++;	
		}
		if(ec==num)
		{
			return c;
		}
		c=a+b;
		a=b;
		b=c;
		printf("%d",c);
	}
}
int main()
{
	int num,n;
	scanf("%d",&num);
	n=find_evenfib(num);
	printf("%d",n);
}
