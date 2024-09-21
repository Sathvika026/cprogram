#include<stdio.h>
int main()
{
int n,rem,reverse=0,num;
printf("Give the numbers:");
scanf("%d",&n);
for(num=n;num!=0;num/=10)
{
rem=num%10;
reverse=(reverse*10)+rem;
}
printf("The reverse of the given number %d is %d",n,reverse);
return 0;
}
