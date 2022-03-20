#include<stdio.h>
#include<stdbool.h>
int SumFact(int);
bool CheckEven(int);

int main()
{
	int iNo = 0;
	bool bret = false;
	printf("Enter number\n");
	scanf("%d",&iNo);
	bret = CheckEven(iNo);
	if(bret == true)
	{
		printf("number is perfect number");
	}
	else
	{
		printf("number is not perfect");
	}
	return 0;
}
bool CheckEven(int input)
{
	int iNumber = 0;
	if(input < 0)
	{
		input = -input;
	}
	iNumber = SumFact(input);
	if(iNumber == input)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int SumFact(int iValue)
{
	int iCnt = 0;
	int iSum = 0;
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	for(iCnt = 1;iCnt<=(iValue/2);iCnt++)
	{
		if((iValue % iCnt)==0)
		{
			iSum = iSum + iCnt;
		}
		
	}
	return iSum;
}