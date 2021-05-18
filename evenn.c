#include<stdio.h>
int main()
{
	int num,r,ec=0,oc=0;
	scanf("%d",&num);
	while(num)
	{
		r=num%10;
		num=num/10;
		if(r%2==0)
		{
			ec++;
		}
		else
		{
			oc++;
		}
	}
	if(ec%2==0 && oc%2!=0)
	{
		printf("even odd");
	}
	else if(oc%2!=0)
	{
		printf("odd");
	}
	else if(ec%2==0)
	{
		printf("even");
	}
	else
	{
		printf("mixed");
	}
}

