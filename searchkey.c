#include<stdio.h>
int search(int n)
{
	int r,key;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r==key)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n,key,i;
	scanf("%d%d",&n,&key);
	if(search(n))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
