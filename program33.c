#include<stdio.h>
int SumEven(int iValue)
{

	int iDigit = 0;
	int iSum = 0;
	
	if(iValue < 0)
	{
		iValue = - iValue;
	}
	while(iValue > 0)
	{
		iDigit = iValue % 10;
		if((iDigit % 2)==0)
		{
			iSum = iSum + iDigit;
		}
		iValue = iValue / 10;
	}
	return iSum;
}
		
int main()
{
	int iNo = 0;
	int iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	iRet=SumEven(iNo);
	printf("sum of even digit is: %d",iRet);
	
	return 0;
} 