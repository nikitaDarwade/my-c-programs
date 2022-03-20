#include<stdio.h>
void Display(int iValue)
{
	int iCnt = 0;
	for(iCnt=iValue;iCnt>=1;iCnt--)
	{
		printf("%d\t",iCnt);
	
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