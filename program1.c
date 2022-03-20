#include<stdio.h>

// Acccept number from user nd display that number of * on screen
// input =4
// output=* * * *
void Display(int ino)
{
	int i = 0;
	for(i = 0;i<ino;i++)
	{
		printf("*\t");
	}
	
}
int main()
{
	int ivalue = 0;
	printf("enter number");
	scanf("%d",&ivalue);
	Display(ivalue);
	
	return 0;
}
	
	