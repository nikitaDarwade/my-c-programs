#include<stdio.h>
int Factoreal(int ivalue)
{
	int ifact = 1;
	int icnt = 0;
	if(ivalue<0)
	{
		ivalue = - ivalue;
	}
	
     icnt = 1;
    while(icnt<=ivalue)
		{
			ifact = ifact * icnt;
			icnt++;
		}
	return ifact;
}

int main()
{
	int Ino = 0;
	int Iret = 0;
	printf("enter number\n");
	scanf("%d",&Ino);
	Iret = Factoreal(Ino);
	printf("factor is %d",Iret);
	
	return 0;
}