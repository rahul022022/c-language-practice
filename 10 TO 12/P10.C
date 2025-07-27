#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();

	printf("\nEnter number: ");
	scanf("%d",&num);

	if(num>0)
	{
		printf("\n Number is positive");
	}
	else if(num<0)
	{
		printf("\n Number is negitive");
	}
	else
	{
		printf("\n Numbes is zero");
	}
	getch();
}

