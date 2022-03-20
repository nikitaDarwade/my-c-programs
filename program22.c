#include<stdio.h>
#include<stdbool.h>
bool CheCkEven(int ivalue)
{
	if((ivalue % 2)==0)
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
	int Ino = 0;
	bool Bret = false;
	printf("enter number\n");
	scanf("%d",&Ino);
	Bret =CheCkEven(Ino);
	if(Bret==true)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is NoteEven");
	}
	
	return 0;
}