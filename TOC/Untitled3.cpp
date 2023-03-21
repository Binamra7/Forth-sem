#include<stdio.h>
int main()
{
	int a=1;
	do
	{
		if(a%2==0)
		printf("%d\t",a);
		a=a+1;
	}while(a<=100);
	return 0;
}
