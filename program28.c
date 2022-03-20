#include<stdio.h>
void Display(int ivalue)
{
	int iDigit =0;
	while(ivalue>0)
	{
		iDigit = ivalue % 10;
		printf("%d",iDigit);
		ivalue = ivalue / 10;
	}
	
}
int main()
{
	int ivalue = 0;
	
	printf("enter first number\n");
	scanf("%d",&ivalue);
	Display(ivalue);
	
	
	return 0;
}