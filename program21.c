#include<stdio.h>
typedef unsigned long int UNIT;
UNIT factoreal(int ivalue)
{
	int i = 0;
	UNIT ifact = 0;
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
		ifact = ifact + i; //4
	}
	return ifact;
}
int main()
{
	int ino = 0;
	UNIT iret = 0;
	printf("enter number\n");
	scanf("%d",&ino);
	iret=factoreal(ino);
	printf("factore is %d",iret);
	
	
	return 0;
	
}

//ky vachaych
//unsignd ,long,typedef
//datypes