#include<stdio.h>
#include<stdlib.h>
int main()
{
  long long int num,n,i,j,count;
  scanf("%llu",&n);
  while(n--){
    count=0;
    scanf("%llu",&num);
    for(i=5;num/i>0;i*=5)
    {
      count+=num/i;
    }
    printf("%llu\n",count);
 }
   return 0;
}
