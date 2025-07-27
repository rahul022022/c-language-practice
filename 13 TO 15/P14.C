#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i=1;
	clrscr();

	printf("\nEnter a number to print multiplication:");
	scanf("%d",&num);

	printf("multiplication table %d:\n",num);

	while(i <= 10)
	{
		printf("%d x %d =%d\n",num,i,num * i);
		i++;
	}
	getch();
}