#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	top:
	printf("enter numbers");
	scanf("%d",&a);
	if(a>=1 ||a<=100)
	goto top;
	return 0;
	
}
