#include<stdio.h>
void main()
{
int a,b,c,n,space;
printf("enter a value for n:");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
space=n-a;
for(b=1;b<=space;b++)
{
printf(" ");
}
for(c=1;c<=a;c++)
{
printf("%d ",a);
}
printf("\n");
}
}
