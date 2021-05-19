#include<stdio.h>
int fib_search(int n)
{
	int c=0,a=0,b=1,x,y;
	if(n==0 || n==1)
	{
		return 1;
	}
	while(c<n)
	{
		c=a+b;//0 1 1 2 3 5 8
		a=b;
		b=c;
	}
	if(n==c)
	{
		return 1;
	}
	else
	{
		//printf("false");
		//printf("%d",c);
		if(c>n)
		{
			x=n-a;
			y=c-n;
			if(x<=y)
			{
				printf("%d",a);
			}
			else if(x==y)
			{
				printf("%d%d",a,c);
			}
			else
			{
				printf("%d",c);
			}
		}
	}
}
int main()
{
	int n,x;
	scanf("%d",&n);
	if(fib_search(n))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}

