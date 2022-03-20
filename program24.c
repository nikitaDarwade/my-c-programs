#include<stdio.h>
void DisplayFacto(int ivalue)
{
int icnt = 0;
if(ivalue<0)
{
	ivalue = - ivalue;
}
if(ivalue==0)
{
	printf("you entered 0 value");
}
for(icnt=1;icnt<ivalue;icnt++)
{
	if((ivalue % icnt)==0)
	{
		printf("%d\t",icnt);
	}
}
}
int main()
{
	int ino = 0;
	printf("enter first number\n");
	scanf("%d",&ino);
	DisplayFacto(ino);
	
	return 0;
}