#include<stdio.h>
#include<conio.h>
#define pi 3.14

void main()
{
	float radius, area;
	clrscr();

	printf("\nEnter radius: ");
	scanf("%f", &radius);

	printf("\nEnter area of circle: ");
	scanf("%f", &area);

	area =pi * radius * radius;

	printf("\nArea of Circle: %2f ", area);
	getch();
}