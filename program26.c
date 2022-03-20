#include<stdio.h>
int DisplayFacto(int ivalue)
{
int icnt = 0;
int isum = 0;
if(ivalue<0)
{
	ivalue = - ivalue;
}
if(ivalue==0)
{
	printf("you entered 0 value");
}
for(icnt=1;icnt<=ivalue/2;icnt++)
{
	if((ivalue % icnt)==0)
	{
		isum = isum + icnt;
	}
}
return isum;

}
int main()
{
	int ino = 0;
	int iret = 0;
	printf("enter first number\n");
	scanf("%d",&ino);
	iret=DisplayFacto(ino);
	printf("factore of Addition number is %d",iret);	
	return 0;
}