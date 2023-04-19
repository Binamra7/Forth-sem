#include<stdio.h>
int main()
{
	int n,s,r,num;
	for(n=100;n<=999;n++)
	{
		s=0;
		for(num=n;num!=0;num=num/10)
		{
			r=num%10;
			s=s+(r*r*r);
		}
		if(n==s)
		printf("%d\t",n);
	}
	return 0;

}
