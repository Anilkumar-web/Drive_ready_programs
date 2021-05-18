#include<stdio.h>
//int main()
//{
//	int num,a,i;
//	scanf("%d %d",&num,&a);
//	for(i=1;i<=a;i++)
//	{
//		printf("%d*%d=%d\n",num,i,num*i);
//	}
//}
//int main()
//{
//	int num,i;
//	scanf("%d",&num);
//	for(i=1;i<=num;i++)
//	{
//		printf("%d*%d=%d\n",num,i,num*i);
//	}
//}
//int main()
//{
//	int num,a,b,i;
//	scanf("%d%d%d",&num,&a,&b);
//	for(i=a;i<=b;i++)
//	{
//		printf("%d*%d=%d\n",num,i,num*i);
//	}
//}
//int main()
//{
//	int num,a,i;
//	scanf("%d%d",&num,&a);
//	for(i=1;i<=a;i++)
//	{
//		if(i%num==0)
//		{
//			continue;
//		}
//		printf("%d*%d=%d\n",num,i,num*i);
//	}
//}
int main()
{
	int num,a,i;
	scanf("%d%d",&num,&a);
	for(i=1;num*i<=a;i++)
	{
		printf("%d*%d=%d\n",num,i,num*i);
	}
}

