#include<stdio.h>
#include<stdbool.h>
int perfect(num)
{
	int i,sum=1;
	for(i=2;i*i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i+num/i;
		}
	}
	return sum;
}
int main()
{
	int num;
	scanf("%d",&num);
	if(num==1)
	{
		printf("false");
	}
	if(num==perfect(num))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
