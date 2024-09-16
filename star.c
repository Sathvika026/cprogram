#include<stdio.h>
void main()
{
int n,a,b;
printf("enter the number of rows:");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
for(b=1;b<=a;b++)
{
printf("* ");
}
printf("\n");
}
}
