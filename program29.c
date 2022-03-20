#include<stdio.h>
int Addition(int iValue)
{
	int iDigit=0;
	int iSum = 0;
	while(iValue>0)
	{
		iDigit = iValue % 10;
		iSum = iSum + iDigit;
		iValue = iValue / 10;
		
	}
	return iSum;
}
int main()
{
	int ino= 0;
	int iret =0;
	printf("Enter the number\n");
	scanf("%d",&ino);
	iret=Addition(ino);
	printf("Addition is %d :",iret);
	
	return 0;
	
}