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
}
int even_odd_seperate(int n)
{
	int r,even=0,odd=0;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r%2==0)
		{
			even=even*10+r;
		}
		else
		{
			odd=odd*10+r;
			odd=reverse(odd);
		}
	}
	printf("%d\n%d",even,odd);
	
}
int main()
{
	int n;
	scanf("%d",&n);
	n=reverse(n);
	even_odd_seperate(n);
}
