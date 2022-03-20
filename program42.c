#include<stdio.h>
void DisplayTable(int iValue)
{
	int iCnt = 0;
	int iSum = 0;
	if(iValue == 0)
	{
		return -1
	}
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	for(iCnt=1;iCnt<=10;iCnt++)
	{
		iSum = iValue * iCnt;
		printf("%d\n",iSum);
	}
}
		
int main()
{
	int iNo = 0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	DisplayTable(iNo);
	
	return 0;
}