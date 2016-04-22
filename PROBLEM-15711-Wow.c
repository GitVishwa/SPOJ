#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num=0;
	scanf("%d",&num);
	if(num>0 && num<50)
	{
	  printf("W");
   		 while(num--)
    	{
    		printf("o");
		}
		printf("w");	
	}
	
	return 0;
}