#include<stdio.h>
#include<stdlib.h>
long long int reverse(long long int num)
{
	long long temp=0,n=0,rev=0;
	temp=num;
	while(temp!=0)
	{
		n = temp % 10;
		rev = rev * 10 + n;
		temp = temp / 10;
	}
	return rev;
}
int main()
{
	long long int n=0,a=0,b=0,sum=0;
	scanf("%llu",&n);
	while(n--)
	{
		scanf("%llu%llu",&a,&b);
		a=reverse(a);
		b=reverse(b);
		sum=a+b;
	    sum=reverse(sum);
	    printf("%llu\n",sum);
	}
	return 0;
}
