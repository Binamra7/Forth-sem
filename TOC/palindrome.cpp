#include<stdio.h>
int main ()
{
	int n,i,a,rev,r,c=0;
	printf("enter how many number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=i;
		rev=0;
		while(a!=0)
		{
			r=a%10;
			rev=rev*10+r;
			a=a/10;
		}
		if(i==rev)
		{
		 printf("%d\t",i);
		 c=c+1;
		}
	}
	
	printf("\n total palindrome number are=%d",c);
	return 0;
}
