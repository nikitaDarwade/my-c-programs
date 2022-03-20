#include<stdio.h>
void Display(int ivalue)
{
	int i = 0;
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