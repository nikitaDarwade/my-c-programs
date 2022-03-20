#include<stdio.h>
void Display(int ino)// parameter
{
	int i =0;
	for(i=1;i<=ino;i++)
	{
		printf("marvellouse\n");
	}
}
int main()
{
	int ivalue =0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	Display(ivalue);
	
	return 0;
}
	
	