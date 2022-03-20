#include<stdio.h>
int Power(int x,int y)
{
	int icnt = 0;
	int iMult = 1;
	
	for(icnt = 1;icnt<=y;icnt++)
	{
		iMult = iMult * x;
	}
	return iMult;
}

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	
	int iRet = 0;
	printf("Enter first number\n");
	scanf("%d",&iNo1);
	
	printf("Enter second  number\n");
	scanf("%d",&iNo2);
	
	iRet = Power(iNo1,iNo2);
	
	printf("%d",iRet);
	return 0;
}
	
	