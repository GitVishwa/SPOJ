#include<stdio.h>
#include<math.h>
int main()
{
	long long int num,a[100],j=0,i=0;
 while(1)
 {
 	scanf("%llu",&num);
 	if(num==42)
 	  break;
 	else
 	  a[j++]=num;
 	  
 }
 printf("\n");
 for(i=0;i<j;i++)
     printf("%llu\n",a[i]);
 return 0;
}
