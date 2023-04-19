#include<stdio.h>
int main()
{
	int a[10][10],i,j,n,m,sum=0;
	printf("enter row and columns:");
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("%d is thesum of diagonal element",sum);
	return 0;
}
