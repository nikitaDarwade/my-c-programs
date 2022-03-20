#include<stdio.h>
int Addition(int ivalue)
{
	int i = 0;
	int isum = 0;
	if(ivalue==0)
	{
		return -1;
	}
	if(ivalue<0)
	{
		ivalue=-ivalue;
	}
	//    1     2   3
	for(i=1;i<=ivalue;i++)
	{
		isum = isum + i; //4
	}
	return isum;
}
int main()
{
	int ino = 0;
	int iret = 0;
	printf("enter number\n");
	scanf("%d",&ino);
	iret=Addition(ino);
	printf("Addition is %d",iret);
	
	
	return 0;
	
}