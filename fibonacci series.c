#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("enter upto how many:");
    scanf("%d",&n);
    printf("%d\t%d",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
return 0;
}
