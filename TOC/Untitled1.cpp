#include<stdio.h>
#include<math.h>
int main()
{
	int r,n,arm=0,m;
	printf("enter a three digit number");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		arm=arm+pow(r,3);
		n=n/10;
	}
	if (arm==m)
	printf("number is armstrong\n");
	else
	printf("number is not armstrong\n");
	return 0;
	
}

