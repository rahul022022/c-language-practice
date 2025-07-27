#include<stdio.h>
#include<conio.h>

void main()
{
	int num, i=1;
	long int fact =1;
	clrscr();

	printf("\nEnter number to find factorial:" );
	scanf("%d",&num);

	if(num < 0)
	{
		printf("\n Factorial is not defined for negative numbers.");
	}
	else
	{

		do
		{
			fact = fact * i;
			i++;
		}while(i <= num);
		printf("Factorial of %d is %ld",num, fact);
	}
	getch();
}