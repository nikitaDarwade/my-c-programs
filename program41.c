#include<stdio.h>
#include<stdbool.h>// problems on number
bool CheckPerfect(int iValue)
{
	int iCnt = 0;
	int iSum = 0;
	if(iValue < 0)
	{
		iValue = - iValue;
	}
	for(iCnt=1;iCnt<=iValue/2;iCnt++)
	{
		if((iValue % iCnt)==0)
		{
			iSum = iSum + iCnt;
		}
	}
	if(iSum == iValue)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iNo = 0;
	bool bret = false;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	bret = CheckPerfect(iNo);
	if(bret==true)
	{
		printf("number is perfect");
	}
	else
	{
		printf("number is not perfect");
	}
	
	return 0;
}