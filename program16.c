//input=5
//output=5 4 3 2 1

#include<stdio.h>
void Display(int ino)
{
	if(ino<0)
	{
		ino = -ino;
	}
	if(ino==0)
	{
		printf("you entered value is 0");
	}
	int i = 0;
	for(i=ino;i>=1;i--)
	{
		printf("%d\t",i);
	}
}
int main()
{
	int ivalue = 0;
	printf("enter your number\n");
	scanf("%d",&ivalue);
	Display(ivalue);
	
	return 0;
}

//initializatiin = 5
//condition   = 1
//displacement = 1

