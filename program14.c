#include<stdio.h>
#include<stdio.h>
void Display(int ivalue)
{
	int i = 0;
	
	if(ivalue==0)
	{
		printf("your entered number id 0\n");
	}
	if(ivalue<0)
	{
		ivalue=-ivalue;
	}
	for(i=1;i<=ivalue;i++)
	{
		printf("%d\n",i);
	}
}
int main()
{
	int ino =0;
	printf("enter number\n");
	scanf("%d",&ino);
	Display(ino);
	
	return 0;
}