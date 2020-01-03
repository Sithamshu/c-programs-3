#include<stdio.h>
#include<math.h>
int main()
{
	int num,sum=0,re=0,cube=0,temp,temp1,n=0;
	printf("enter a number");
	scanf("%d",&num);
	temp=num;
	temp1=num;
	while(num>0)
{
	num=num/10;
	n++;
}
	while (temp!=0)
	{
		re=temp%10;
		cube=pow(re,n);
		sum=sum+cube;
		temp=temp/10;
	}
	if (sum==temp1)
	printf("armstrong number");
	else
	printf("not an armstrong number");
	}

