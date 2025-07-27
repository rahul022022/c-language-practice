#include<stdio.h>
#include<conio.h>

void main()
{
	int choice;
	clrscr();

	printf("\n operators\n");
	printf("\n1. add");
	printf("\n2. sub");
	printf("\n3. mul");

	printf("\nEnter your choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("\n Addition: %d");
			break;
		case 2:
			printf("\n Subtraction: %d");
			break;
		case 3:
			printf("\n Multiplication: %d");
			break;
		default:
			printf("\n Invalid choice");
	}
	getch();
}