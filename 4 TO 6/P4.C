#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	float b;
	char ch;
	long num;
	double pi;

	clrscr();

	printf("\nEnter Value Of integer: ");
	scanf("%d", &a);

	printf("\nEnter Value Of float: ");
	scanf("%f", &b);

	printf("\nEnter Value of Character: ");
	scanf(" %c", &ch);

	printf("\nEnter Valur of long: ");
	scanf("%ld", &num);

	printf("\nEnrer Value of double: ");
	scanf("%lf", &pi);

	printf("\n Integer Value: %d", a);
	printf("\n Float Value: %f", b);
	printf("\n Character Value: %c", ch);
	printf("\n Long Value: %ld", num);
	printf("\n Double Value: %lf", pi);

	getch();
}