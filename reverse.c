#include<stdio.h>
int reverse(int n)
{
	int r,rev=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	return rev;
//	if(t==rev)
//	{
//		printf("palindrome");
//	}
//	else
//	{
//		printf("not palindrome");
//	}
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n==reverse(n))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
