//input = 123 % 10
//output= 3
//input = 67 % 10
//output= 7
//input = 7058 % 10
//output= 8

#include<stdio.h>
void Display()
{
	int ino = 75
	int iDigit = 0;
	
	iDigit = ivalue % 10;
	printf("%d",iDigit);
	ivalue=ivalue/10;
	
	iDigit = ivalue % 10;
	printf("%d",iDigit); 
	ivalue = ivalue / 10;
	
	iDigit = ivalue %  10;
	printf("%d",iDigit);
	ivalue = ivalue/10;
	
	iDigit = ivalue % 10;
	printf("%d",iDigit);
	ivalue = ivalue / 10;
}
	
int main()
{
	
	Display(ino);
	return 0;
}