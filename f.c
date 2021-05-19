#include<stdio.h>
int fib_search(int n)
{
	int c=0,a=0,b=1,count=2;
	if(n==0 || n==1)
	{
		return n+1;
	}
	while(c<n)
	{
		c=a+b;//0 1 1 2 3 5 8
		count++;
		a=b;
		b=c;
	}
	if(n==c)
	{
		//printf("%d",count);	
		return count;
	}
	else
	{
		//printf("false");
		return 0;
	}
}
int main()
{
	int n,x;
	scanf("%d",&n);
	x=fib_search(n);
	printf("%d",x);
	if(x)
	{
		printf("present");
	}
	else
	{
		printf("not present");
	}
}

