#include<stdio.h>
int main()
{
	int i,count=0;
	char ch[30];
	printf("enter any string");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==65||ch[i]==97)
		count=count+1;
	}
	printf("no.of repeated a=%d\n",count);
	return 0;
}
