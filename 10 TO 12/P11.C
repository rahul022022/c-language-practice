#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,n3;
	clrscr();

	printf("\nEnter n1:");
	scanf("%d",&n1);
	printf("\nEnter n2:");
	scanf("%d",&n2);
	printf("\nEnter n3:");
	scanf("%d",&n3);

	if(n1>=n2 && n1>=n3)
	{
		printf("\n Number 1: %d is largest");
	}
	else if(n2>=n1 && n2>=n3)
	{
		printf("\n Number 2: %d is largest");
	}
	else
	{
		printf("\n Number 3: %d is largest");
	}
	getch();
}