#include<stdio.h>

 void Display(); // DECLERATION

int main()
{
	
	Display();// function call
	
	return 0;
	
}

void Display()
{
	int i = 0;
	for(i=1;i<=5;i++); // DEFINATION
	{
		
		printf("%d\n",i);
	}
	
}