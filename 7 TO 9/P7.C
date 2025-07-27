#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();

	printf("\n Enter value of A: ");
	scanf("%d", &a);

	printf("\n Enter value of B: ");
	scanf("%d", &b);

	printf("\n Addition: %d",a+b);
	printf("\n Subtraction: %d",a-b);
	printf("\n Multiplication: %d",a*b);
	printf("\n Divition: %d",a/b);
	printf("\n module: %d",a%b);

	getch();
}
