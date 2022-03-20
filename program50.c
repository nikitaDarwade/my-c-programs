#include<stdio.h>
void Display(int iValue)
{
	int iCnt = 0;
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		if((iCnt % 2)==0)
		{
			printf("#\t");
		}
		else
		{
			printf("*\t");
		}
	
	}
}

int main()
{
	int iNo = 0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	Display(iNo);
	
	return 0;
}