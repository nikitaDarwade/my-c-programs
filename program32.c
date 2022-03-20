#include<stdio.h>
int CountEven(int iValue)
{
	int iCnt = 0;
	int iDigit = 0;
	if(iValue == 0)
	{
		return 1;
	}
	if(iValue < 0)
	{
		iValue = - iValue;
	}
	while(iValue > 0)
	{
		iDigit = iValue % 10;
		if((iDigit % 2)==0)
		{
			iCnt++;   
		}
		iValue = iValue / 10;
	}
	return iCnt;
}
		
int main()
{
	int iNo = 0;
	int iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	iRet=CountEven(iNo);
	printf("Even number is: %d",iRet);
	
	return 0;
}