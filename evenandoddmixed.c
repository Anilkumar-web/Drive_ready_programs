#include<stdio.h>
int even_mixed(int num)
{
	int r,ec=0,oc=0,t=num;
	while(num)
	{
		r=num%10;
		num=num/10;
	//	printf("%d",r);
		if(r%2==0)
		{
			ec++;
		}
		else
		{
			oc++;	
		}
	}
	printf("%d",r);
//	printf("%d %d",ec,oc);
	if(oc==0)
	{
		printf("even");
	}
	else if(ec==0)
	{
		printf("odd");	
	}
	else if(t%2==0)
	{
		printf("even mixed");
	}
	else if(t%2!=0)
	{
		printf("odd mixed");
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	even_mixed(num);
	return 0;
}
