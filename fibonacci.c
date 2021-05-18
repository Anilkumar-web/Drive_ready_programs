#include<stdio.h>
void fib(int num)
{
	int i,a=0,b=1,c;
//	if(num==0)
//	{
//		return;
//	}
//	if(num==1)
//	{
//		printf("%d",a);
//		return;
//	}
//	printf("%d%d",a,b);
	for(i=1;i<=num;i++)
	{
		if(i==1)
		{
			printf("%d",a);
		}
		if(i==2)
		{
			printf("%d",b);
		}
		else if(i>2)
		{
			c=a+b;
			a=b;
			b=c;
			printf("%d ",c);	
		}
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	fib(num);
}
