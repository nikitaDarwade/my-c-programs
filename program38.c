#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrom(int iNo)
{
	
	int iDigit = 0;
	int iRev = 0;
	int iTemp = iNo;
	while(iNo!=0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10)+ iDigit;
		iNo = iNo / 10;
	}
		if(iRev == iTemp)
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
	int iValue = 0;
	bool Bret = false;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	Bret= CheckPalindrom(iValue);
	if(Bret==true)
	{
		printf("Your Number is palindrome");
	}
	else
	{
		printf("your Number is Not");
	}
	
	return 0;
}