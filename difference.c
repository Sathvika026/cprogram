#include<stdio.h>
int main()
{
	int i,k,n,Difference;
	printf("Enter how many numbers should be entered in the series :");
	scanf("%d",&n);
	int max=-1,min=1000;
	for(i=1;i<=n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&k);
		if(k>max)
		{
			max=k;
		}
		if(k<min)
		{
			min=k;
		}
	}
	printf("\nmax:%d min:%d",max,min);
	Difference=min-max;
	printf("\nDifference:%d",Difference);
    return 0;
}
