#include<stdio.h>
int main()
{
	int n,f,i,num,sum=0,r=0;
	printf("enter a number");
	scanf("%d",&num);
	n=num;
	while(num>0)
	{
		r=num%10;
		f=1;
		for (i=1;i<=r;i++)
		{
			f=f*i;
		}
		sum+=f;
		num=num/10;
	}
	if (sum==n)
	printf("Strong number");
	else
	printf("not a strong number");
}
