#include<stdio.h>
int fib_search(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	int c,a=0,b=1,i;
	while(c<=n)
	{
		c=a+b;
		a=b;
		b=c;
		if(n==c)
		{
			return 1;
		}
	}
	return 0;	
}
int main()
{
	int n;
	scanf("%d",&n);
	fib_search(n);
	if(fib_search(n))
	{
		printf("present");
	}
	else
	{
		printf("not present");
	}
}
