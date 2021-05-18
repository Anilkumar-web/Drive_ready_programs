#include<stdio.h>
int is_even_odd_wave(int num)
{
	int d,r;
	d=num%10;
	num=num/10;
	while(num)
	{
		r=num%10;
		num=num/10;
		if((d%2==0 && r%2==0) || (d%2==1 && r%2==1))
		{
			return 0;
		}
		else
		{
			d=r;
		}
	}
	return 1;
}
int main()
{
	int i,t,num;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&num);
		if(is_even_odd_wave(num))
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
	}
}
