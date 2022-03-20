#include<stdio.h>
int Revers(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	
	while(iNo!=0) // -----
	{
		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		iRev =(iRev * 10 )+iDigit;
		iNo = iNo / 10;
	}
	
	return iRev;
}
int main()
{
	int iValue =  0;
	int iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	iRet = Revers(iValue);
	printf("Reveres number is %d\n",iRet);
	
	
	
	return 0;
}