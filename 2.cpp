#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,x,y,s=0;
	printf("enter two numbers");
	scanf("%d %d",&n1,&n2);
	y=n2;
	x=n1;
	while(y>0)
	{
		if(y%2!=0)
		{
			s=s+x;
		}
		x=x*2;
		y=y/2;
	}
	printf("%d*%d=%d",n1,n2,s);
}
