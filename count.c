#include<stdio.h>
//int main()
//{
//	int num,count=0;
//	scanf("%d",&num);
//	while(num)
//	{
//		num=num/10;
//		count++;
//	}
//	printf("%d",count);
//}
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
	if(ec%2==0)
	{
		printf("even");
	}
	else if(oc%2!=0)
	{
		printf("odd");
	}
	else
	{
		printf("mixed");
	}
}

