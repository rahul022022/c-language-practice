#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,temp;
	clrscr();

	printf("\nEnter Value of a: ");
	scanf("%d", &a);
	printf("\nEnter Value of b: ");
	scanf("%d", &b);

	temp=a;
	a=b;
	b=temp;

	printf("\nAfter swaping the value:  ");
	printf("\na= %d\n",a);
	printf("b= %d\n",b);

	getch();
}