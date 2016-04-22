#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,sum=0,i;
	scanf("%d%d",&a,&b);
	if(a<=100 && b<=100)
	{
		for(i=a;i<=b;i++)
		{
			sum += i * i;
		}
		printf("%d",sum);
	}	
		
	return 0;
}