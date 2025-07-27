#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();

	printf("\nEnter value A: ");
	scanf("%d",&a);
	printf("\nEnter value of B: ");
	scanf("%d",&b);

	printf("\n **Relational operators **");

	printf("\n if Equal: %d",a == b);
	printf("\n not equal: %d",a != b);
	printf("\n greater then: %d",a > b);
	printf("\n Less then: %d",a < b);
	printf("\n greater or equal: %d",a >= b);
	printf("\n less or equal: %d", a <= b);

	getch();
}