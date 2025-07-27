#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();

	printf("\nEnter value A:");
	scanf("%d",&a);
	printf("\nEnter value B:");
	scanf("%d",&b);

	printf("\na && b= %d",a && b);
	printf("\na || b= %d",a || b);
	printf("\n!a = b= %d",!a);

	getch();
}